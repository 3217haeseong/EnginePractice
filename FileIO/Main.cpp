#include <iostream>

int main()
{
	FILE* file = nullptr;
	fopen_s(&file, "Test.txt", "r");
	if (file == nullptr)
	{
		std::cout << "Can't Open the file.\n";
		std::cin.get();
		return 0;
	}

	char buffer[256] = {  };

	//fseek.
	fseek(file, 0, SEEK_END);
	int length = ftell(file);
	fseek(file, 0, SEEK_SET);
	int fp = ftell(file);

	size_t readSize = fread(buffer, 1, 256,file);
	std::cout << buffer << "\n";

	// 쓰기를 위해 파일을 하나 더 열기 (생성).
	FILE* newFile = nullptr;
	fopen_s(&newFile, "Test2.txt", "w");

	if (newFile == nullptr)
	{
		fclose(file);
		return 0;
	}

	//fseek(file, 0, SEEK_SET);
	rewind(file);
	int number = 0;
	char name[50] = {};
	float testnumber = 0.0f;
	sscanf_s(buffer, "number=%d name=$s testnumber=%f", &number, name, testnumber);
	/*int result = fscanf_s(file, 
		   "number=%d name=$s testnumber=%f",&number, name, 50, &testnumber);*/
	
	//size_t writeSize = fwrite(buffer, 1, readSize, newFile);
	fprintf(newFile, "number=%d testnumber=%f name=%s", 10000, 5.1234f, "testname");

	fclose(newFile);

	//while (!feof(file))
	//{
	//	// end of file. 
	//	/*if (feof(file))
	//	{
	//		break;
	//	}*/

	//	//if (fgets(buffer, 256, file) == nullptr)
	//	//{
	//	//	break;
	//	//}

	//	fgets(buffer, 256, file);;
	//	std::cout << buffer;
	//}
	// 조작.

	// 파일 닫기. 
	fclose(file);

	std::cin.get();
}