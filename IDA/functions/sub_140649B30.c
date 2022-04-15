//----- (0000000140649B30) ----------------------------------------------------
__int64 __fastcall sub_140649B30(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	_DWORD* v4; // rcx
	BOOL v5; // edx
	BOOL* v6; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
	{
		v5 = 0;
		goto LABEL_7;
	}
	if (*(_DWORD*)(v3 + 128) == 20)
	{
		v5 = (*(float(__fastcall**)(__int64))(*(_QWORD*)v3 + 96i64))(v3) > *(float*)(v3 + 68);
	LABEL_7:
		v6 = *(BOOL**)(a1 + 16);
		v6[2] = 1;
		*v6 = v5;
		goto LABEL_8;
	}
	v4 = *(_DWORD**)(a1 + 16);
	*v4 = 0;
	v4[2] = 1;
LABEL_8:
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

