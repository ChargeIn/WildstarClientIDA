//----- (0000000140680EC0) ----------------------------------------------------
__int64 __fastcall sub_140680EC0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	int v4; // eax
	__int64 v5; // rcx
	int* v6; // rax
	int v7; // edx
	int v9; // [rsp+38h] [rbp+10h] BYREF

	v2 = sub_14067B760(a1);
	v3 = v2;
	if (v2 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2)
	{
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		v6 = (int*)sub_1403BA420(v5, 0, v4);
		if (v6)
		{
			v9 = *v6;
			if (v9)
			{
				sub_1403D3470(a1, &v9);
				return 1i64;
			}
		}
		*(_DWORD*)(a1[2] + 8i64) = v7;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140680EF9: variable 'v5' is possibly undefined
// 140680F2E: variable 'v7' is possibly undefined

