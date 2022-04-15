#include "../winhttp.h"

//----- (0000000140018870) ----------------------------------------------------
void* sub_140018870()
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
		return &unk_1409D074C;
	v3 = *(_QWORD**)(qword_140C635F0 + 288);
	for (i = v3; ; ++i)
	{
		v5 = *(unsigned __int16*)*i;
		if ((((v5 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v5 - 150) <= 1)
			&& !(unsigned int)sub_14018E2C0(*i + 2i64, L"AuthNc"))
		{
			break;
		}
		++v2;
		++v0;
		if (v2 >= v1)
			return &unk_1409D074C;
	}
	if (v0 + 1 >= (int)v1)
		return &unk_1409D074C;
	result = (void*)v3[v0 + 1];
	if (!result)
		return &unk_1409D074C;
	return result;
}
// 1409E09E8: using guessed type wchar_t aAuthnc[7];
// 140C635F0: using guessed type __int64 qword_140C635F0;

