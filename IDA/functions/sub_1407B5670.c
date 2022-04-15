#include "../winhttp.h"

//----- (00000001407B5670) ----------------------------------------------------
int* __fastcall sub_1407B5670(__int64 a1, __int64 a2)
{
	int* result; // rax
	int* v4; // rbx
	_QWORD* v5; // rdi
	void(__fastcall * **v6)(_QWORD); // rcx

	result = sub_14018B280(72i64, 0);
	v4 = result;
	v5 = result + 8;
	if (result != (int*)-32i64)
	{
		*((_QWORD*)result + 5) = 0i64;
		*((_QWORD*)result + 6) = 0i64;
		*((_QWORD*)result + 7) = 0i64;
		sub_14001C1B0(v5, *(int**)(a2 + 8), *(_QWORD*)(a2 + 16));
		v6 = *(void(__fastcall****)(_QWORD))(a2 + 32);
		v5[4] = v6;
		if (v6)
			(**v6)(v6);
		return v4;
	}
	return result;
}

