#include "../winhttp.h"

//----- (000000014094DA00) ----------------------------------------------------
int sub_14094DA00()
{
	int result; // eax

	result = qword_140C78558;
	if (qword_140C78558)
		return CloseHandle((HANDLE)qword_140C78558);
	return result;
}
// 140C78558: using guessed type __int64 qword_140C78558;

