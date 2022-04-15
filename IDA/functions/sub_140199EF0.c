//----- (0000000140199EF0) ----------------------------------------------------
_QWORD* __fastcall sub_140199EF0(__int64* a1)
{
	__int64 v1; // rbx
	__int64 v2; // rdx
	__int64 v3; // rax
	_QWORD* v4; // rcx
	_QWORD* result; // rax
	char* v6; // r8
	__int64 v7; // r8
	__int64 v8; // rcx
	__int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

	v1 = qword_140C63748;
	v2 = *(_QWORD*)(qword_140C63748 + 64);
	v9[1] = a1[1];
	v3 = *a1;
	v4 = *(_QWORD**)(qword_140C63748 + 56);
	v9[0] = v3;
	result = sub_14019A370(v4, v2, v9);
	v6 = *(char**)(v1 + 64);
	if (result + 2 != (_QWORD*)v6)
	{
		v7 = (v6 - (char*)(result + 2)) >> 4;
		if (v7 > 0)
		{
			++result;
			do
			{
				v8 = result[2];
				--v7;
				result += 2;
				*(result - 2) = v8;
				*(result - 3) = *(result - 1);
			} while (v7 > 0);
		}
	}
	*(_QWORD*)(v1 + 64) -= 16i64;
	return result;
}
// 140C63748: using guessed type __int64 qword_140C63748;

