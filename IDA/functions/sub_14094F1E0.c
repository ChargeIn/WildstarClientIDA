#include "../winhttp.h"

//----- (000000014094F1E0) ----------------------------------------------------
int sub_14094F1E0()
{
	int result; // eax

	result = (int)qword_140C7AB58;
	if (qword_140C7AB58)
		return CloseHandle(qword_140C7AB58);
	return result;
}

