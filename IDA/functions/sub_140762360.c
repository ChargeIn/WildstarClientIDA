//----- (0000000140762360) ----------------------------------------------------
__int64 __fastcall sub_140762360(_QWORD* a1)
{
	unsigned int v1; // edx
	unsigned __int64 v3; // r8
	__int64 v4; // rax
	__int64 v5; // r14
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rbx
	unsigned int v10; // edi
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64* v14; // rax
	__int64 v15; // rax
	__int64 v16; // rcx
	unsigned int v17; // esi
	__int64 v18; // rax
	__int64 v19; // rax
	__int64 v20; // r8
	__int64 v21; // rdx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64* v24; // rax
	__int64 v25; // rax
	__int64 v26; // rdx
	__int64 v27; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v31; // [rsp+50h] [rbp+8h] BYREF
	__int64 v32; // [rsp+58h] [rbp+10h] BYREF
	__int64 v33; // [rsp+60h] [rbp+18h] BYREF
	__int64 v34; // [rsp+68h] [rbp+20h] BYREF

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v4) + 400i64) == a1)
				break;
			v4 = ++v1;
		} while (v1 < v3);
	}
	v5 = qword_140C65988;
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v6 = a1[2];
	v7 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	a1[2] += 16i64;
	v8 = *(_QWORD*)(v5 + 216);
	v9 = *(_QWORD*)(v8 + 16);
	if (v9 != v8)
	{
		do
		{
			v10 = *(_DWORD*)(v9 + 32);
			v11 = *(_QWORD*)(qword_140C65988 + 16);
			v12 = v11;
			v13 = *(_QWORD*)(v11 + 8);
			while (v13)
			{
				if (*(_DWORD*)(v13 + 32) < v10)
				{
					v13 = *(_QWORD*)(v13 + 24);
				}
				else
				{
					v12 = v13;
					v13 = *(_QWORD*)(v13 + 16);
				}
			}
			if (v12 == v11 || v10 < *(_DWORD*)(v12 + 32))
			{
				v32 = *(_QWORD*)(qword_140C65988 + 16);
				v14 = &v32;
			}
			else
			{
				v31 = v12;
				v14 = &v31;
			}
			v15 = *v14;
			if (v15 == *(_QWORD*)(qword_140C65988 + 16))
				goto LABEL_39;
			v16 = *(_QWORD*)(v15 + 40);
			if (!v16)
				goto LABEL_39;
			v17 = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v16 + 24i64))(v16) + 36);
			if (qword_140C63840)
			{
				v18 = qword_140C63840(off_140A6B0F0, v17, qword_140C63858);
			}
			else
			{
				if (dword_140C64FBC || (int)sub_14020FAE0() < 0)
				{
				LABEL_26:
					v19 = a1[2];
					v20 = qword_140C65988;
					*(_DWORD*)(v19 + 8) = 3;
					*(double*)v19 = (double)(int)v10;
					a1[2] += 16i64;
					v21 = *(_QWORD*)(v20 + 16);
					v22 = *(_QWORD*)(v21 + 8);
					v23 = v21;
					while (v22)
					{
						if (*(_DWORD*)(v22 + 32) < v10)
						{
							v22 = *(_QWORD*)(v22 + 24);
						}
						else
						{
							v23 = v22;
							v22 = *(_QWORD*)(v22 + 16);
						}
					}
					if (v23 == v21 || v10 < *(_DWORD*)(v23 + 32))
					{
						v34 = *(_QWORD*)(v20 + 16);
						v24 = &v34;
					}
					else
					{
						v33 = v23;
						v24 = &v33;
					}
					v25 = *v24;
					if (v25 == v21)
						v26 = 0i64;
					else
						v26 = *(_QWORD*)(v25 + 40);
					sub_140432C80(a1, v26);
					sub_14005EA50(
						(__int64)a1,
						(__int64*)(a1[2] - 48i64),
						(int*)(a1[2] - 32i64),
						(unsigned int*)(a1[2] - 16i64));
					a1[2] -= 32i64;
					goto LABEL_39;
				}
				v18 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C10 + 24i64))(qword_140C63C10, v17);
			}
			if (!v18 || (*(_BYTE*)(v18 + 12) & 8) == 0)
				goto LABEL_26;
		LABEL_39:
			v27 = *(_QWORD*)(v9 + 24);
			if (v27)
			{
				v9 = *(_QWORD*)(v9 + 24);
				for (i = *(_QWORD*)(v27 + 16); i; i = *(_QWORD*)(i + 16))
					v9 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v9 + 8); v9 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v9 = j;
				if (*(_QWORD*)(v9 + 24) != j)
					v9 = j;
			}
		} while (v9 != *(_QWORD*)(v5 + 216));
	}
	return 1i64;
}
// 140A6B0F0: using guessed type wchar_t *off_140A6B0F0[2];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C10: using guessed type __int64 qword_140C63C10;
// 140C64FBC: using guessed type int dword_140C64FBC;
// 140C65988: using guessed type __int64 qword_140C65988;

