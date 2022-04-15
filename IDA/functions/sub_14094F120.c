#include "../winhttp.h"

//----- (000000014094F120) ----------------------------------------------------
int sub_14094F120()
{
	int result; // eax

	result = (int)qword_140C7AA88;
	if (qword_140C7AA88)
		return CloseHandle(qword_140C7AA88);
	return result;
}

