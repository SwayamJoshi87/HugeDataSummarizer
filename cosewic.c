#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cosewic.h"
#define _CRT_SECURE_NO_WARNINGS
int num = 1;
int loadData(char* FileName, struct FileData* data, int maxRecords) {
	FILE* fp = NULL;
	fp = fopen("data.csv", "r");
	int count = 0;
	while (fscanf(fp,"%d,%s,%[^\n],%d,%s",&data->year,data->taxon,data->status,&data->count,data->province) != EOF)
	{
		count++;
		printf("%d,%s,%s,%d,%s", data->year, data->taxon, data->status, data->count, data->province);
	}
	return count;
}
//void mainLogic(struct FileData* data, int records) {
	//loadData()
//}
