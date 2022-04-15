//----- (000000014078B4A0) ----------------------------------------------------
void __fastcall sub_14078B4A0(__int64 a1)
{
	int v2; // ecx
	int v3; // ecx
	__int64 v4; // rcx
	unsigned __int64 v5; // rdx
	unsigned __int64 v6; // rcx
	unsigned __int64 v7; // rax
	int v8; // ecx
	__int64 v9; // rcx
	void(__fastcall * v10)(_QWORD); // rax
	float v11[4]; // [rsp+20h] [rbp-58h] BYREF
	__int64 v12; // [rsp+30h] [rbp-48h] BYREF
	int v13; // [rsp+38h] [rbp-40h]
	__int64 v14; // [rsp+3Ch] [rbp-3Ch]
	__int64 v15; // [rsp+44h] [rbp-34h]
	int v16; // [rsp+4Ch] [rbp-2Ch]
	__int64 v17; // [rsp+50h] [rbp-28h] BYREF
	int v18; // [rsp+58h] [rbp-20h]
	int v19; // [rsp+5Ch] [rbp-1Ch]
	__int64 v20; // [rsp+60h] [rbp-18h]
	int v21; // [rsp+68h] [rbp-10h]
	int v22; // [rsp+6Ch] [rbp-Ch]

	*(_BYTE*)(a1 + 76) = 0;
	v2 = *(_DWORD*)(a1 + 72);
	if (v2)
	{
		v3 = v2 - 1;
		if (v3)
		{
			if (v3 == 1)
			{
				v4 = *(_QWORD*)(a1 + 88);
				v14 = 0i64;
				v15 = 0i64;
				v16 = 0;
				v13 = 1065353216;
				v12 = 1112i64;
				(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v4 + 584i64))(v4, 0i64, &v12);
				*(_DWORD*)(a1 + 72) = 3;
			}
		}
		else
		{
			(*(void(__fastcall**)(_QWORD, __int64, float*))(**(_QWORD**)(a1 + 88) + 872i64))(
				*(_QWORD*)(a1 + 88),
				21i64,
				v11);
			v5 = 0i64;
			v6 = *(_QWORD*)(a1 + 104) - 1i64;
			if (*(_QWORD*)(a1 + 104) != 1i64)
			{
				do
				{
					v7 = (v6 + v5) >> 1;
					if (v11[0] >= *(float*)(*(_QWORD*)(a1 + 96) + 8 * v7))
						v6 = (v6 + v5) >> 1;
					else
						v5 = v7 + 1;
				} while (v5 < v6);
			}
			v8 = *(_DWORD*)(*(_QWORD*)(a1 + 96) + 8 * v5 + 4);
			v20 = 0i64;
			v21 = 0;
			v18 = 1065353216;
			v19 = v8;
			v9 = *(_QWORD*)(a1 + 88);
			v17 = 1112i64;
			v22 = 500;
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v9 + 584i64))(v9, 0i64, &v17);
			*(_DWORD*)(a1 + 72) = 3;
		}
	}
	else
	{
		v10 = *(void(__fastcall**)(_QWORD))(a1 + 56);
		if (v10)
			v10(*(_QWORD*)(a1 + 64));
	}
}
// 14078B4A0: using guessed type float var_58[4];

