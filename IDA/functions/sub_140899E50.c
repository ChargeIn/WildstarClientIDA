#include "../winhttp.h"

//----- (0000000140899E50) ----------------------------------------------------
void(__fastcall*** __fastcall sub_140899E50(__int64 a1))(_QWORD, _QWORD)
{
	void(__fastcall * **v1)(_QWORD, _QWORD); // rbx
	void(__fastcall * **v2)(_QWORD, _QWORD); // rdi
	void(__fastcall * **result)(_QWORD, _QWORD); // rax

	v1 = *(void(__fastcall****)(_QWORD, _QWORD))a1;
	v2 = *(void(__fastcall****)(_QWORD, _QWORD))(a1 + 8);
	if (*(void(__fastcall****)(_QWORD, _QWORD))a1 == v2)
	{
		*(_QWORD*)(a1 + 8) = v1;
	}
	else
	{
		do
		{
			(**v1)(v1, 0i64);
			v1 += 3;
		} while (v1 != v2);
		result = *(void(__fastcall****)(_QWORD, _QWORD))a1;
		*(_QWORD*)(a1 + 8) = *(_QWORD*)a1;
	}
	return result;
}

