using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;

public class FileDataHandler
{
    private string dataDirPath = "";
    private string dataFileName = "";

    public FileDataHandler(string dataDirPath, string dataFileName)
    {
        this.dataDirPath = dataDirPath;
        this.dataFileName = dataFileName;
    }

    public GameData Load()
    {
        string fullPath = Path.Combine(dataDirPath, dataFileName);
        GameData loadedData = null;
        if(File.Exists(fullPath))
        {
            try
            {
                // загружаем преобразованный в JSON файл
                string dataToLoad = "";
                using (FileStream stream = new FileStream(fullPath, FileMode.Open))
                {
                    using (StreamReader reader = new StreamReader(stream))
                    {
                        dataToLoad = reader.ReadToEnd();
                    }
                }
                // пребразуем из JSON в C#
                loadedData = JsonUtility.FromJson<GameData>(dataToLoad);
            }
            catch(Exception e)
            {
                Debug.LogError("Ошибка при попытке чтения данных из файла:" +
                    fullPath + "\n" + e);
            }
        }
        return loadedData;
    }

    public void Save(GameData data)
    {
        string fullPath =Path.Combine(dataDirPath, dataFileName);

        try
        {
            // создаем файл сохранение если он еще не сущеуствует
            Directory.CreateDirectory(Path.GetDirectoryName(fullPath));

            // преобразуем данные из C# в JSON
            string dataToStore = JsonUtility.ToJson(data, true);

            // запись преобразованных данных в файл
            using (FileStream stream = new FileStream(fullPath, FileMode.Create))
            {
                using (StreamWriter writer = new StreamWriter(stream))
                {
                    writer.Write(dataToStore);
                }
            }
        }
        catch(Exception e)
        {
            Debug.LogError("Ошибка при попытке сохранения данных в файл:" + 
                fullPath + "\n" + e);
        }
    }
}
