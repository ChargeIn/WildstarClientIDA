#include "../winhttp.h"

//----- (00000001400189E0) ----------------------------------------------------
void* sub_1400189E0()
{
	int v0; // edi
	__int64 v1; // r15
	__int64 v2; // rbx
	_QWORD* v3; // r14
	_QWORD* i; // rsi
	int v5; // ecx
	void* result; // rax

	v0 = 0;
	v1 = *(int*)(qword_140C635F0 + 296);
	v2 = 0i64;
	if ((int)v1 <= 0)
		return &unk_1409D076C;
	v3 = *(_QWORD**)(qword_140C635F0 + 288);
	for (i = v3; ; ++i)
	{
		v5 = *(unsigned __int16*)*i;
		if ((((v5 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v5 - 150) <= 1)
			&& !(unsigned int)sub_14018E2C0(*i + 2i64, L"Auth"))
		{
			break;
		}
		++v2;
		++v0;
		if (v2 >= v1)
			return &unk_1409D076C;
	}
	if (v0 + 1 >= (int)v1)
		return &unk_1409D076C;
	result = (void*)v3[v0 + 1];
	if (!result)
		return &unk_1409D076C;
	return result;
}
// 1409E0A70: using guessed type wchar_t aAuth_1[5];
// 140C635F0: using guessed type __int64 qword_140C635F0;

