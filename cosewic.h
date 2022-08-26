#include <stdio.h>
//Creating the FileData struct to store the file data
#define STRING_LEN_MAX 30
struct FileData
{
	int year;
	char taxon[STRING_LEN_MAX];
	char status[STRING_LEN_MAX];
	int count;
	char province[3];
};
int loadData(char* FileName, struct FileData *data, int maxRecords);
void mainLogic(struct FileData* data, int records);

