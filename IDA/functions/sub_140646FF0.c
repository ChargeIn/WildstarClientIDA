//----- (0000000140646FF0) ----------------------------------------------------
__int64 __fastcall sub_140646FF0(__int64 a1)
{
	__int64 v1; // rax
	__int64 v4; // rax
	__int64 v5; // rbx
	int* v6; // rax
	unsigned int v7; // esi
	__int16* v8; // rdi
	__int64* v9; // rbx
	__int64 v10; // rcx
	__int64* v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int16* v14; // rax
	__int64 v15; // rcx
	__int64 v16; // r8
	__int16* v17; // r9
	int v18; // edx
	int v19; // eax
	__int16* v20; // rax
	int v21; // edx
	int v22; // eax
	_QWORD v23[3]; // [rsp+20h] [rbp-18h] BYREF
	int v24; // [rsp+40h] [rbp+8h] BYREF

	v1 = *(_QWORD*)(a1 + 40);
	if (*(_QWORD*)v1 == v1)
		return 2147549183i64;
	v4 = *(_QWORD*)(*(_QWORD*)v1 + 16i64);
	v5 = *(_QWORD*)(v4 - 8);
	v23[0] = v4;
	v23[1] = v5;
	v6 = sub_14018B280(2 * v5 + 18, 0);
	v7 = 0;
	if (v6)
	{
		*((_QWORD*)v6 + 1) = v5;
		*(_QWORD*)v6 = off_140B55060;
	}
	else
	{
		v6 = 0i64;
	}
	v8 = (__int16*)(v6 + 4);
	sub_1401B2410(v23, (__int64)(v6 + 4));
	v8[v5] = 0;
	v9 = **(__int64***)(a1 + 40);
	v10 = *v9;
	v11 = (__int64*)v9[1];
	*v11 = *v9;
	*(_QWORD*)(v10 + 8) = v11;
	v12 = v9[2];
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
	sub_14018B900((__int64)v9, 0);
	v14 = sub_14034BDD0(v13, 347806);
	v17 = v14;
	if (v8 != v14)
	{
		if (v8)
		{
			if (v14)
			{
				v18 = (unsigned __int16)*v8;
				v16 = 0i64;
				if (v18 == (unsigned __int16)*v14)
				{
					while ((_WORD)v18)
					{
						v18 = (unsigned __int16)v8[v16 + 1];
						v19 = (unsigned __int16)v17[++v16];
						if (v18 != v19)
							goto LABEL_14;
					}
					goto LABEL_24;
				}
			}
		}
	LABEL_14:
		v20 = sub_14034BDD0(v15, 347814);
		v17 = v20;
		if (v8 != v20)
		{
			if (!v8 || !v20 || (v21 = (unsigned __int16)*v8, v16 = 0i64, v21 != (unsigned __int16)*v20))
			{
			LABEL_20:
				v7 = -2147024809;
				goto LABEL_24;
			}
			while ((_WORD)v21)
			{
				v21 = (unsigned __int16)v8[v16 + 1];
				v22 = (unsigned __int16)v17[++v16];
				if (v21 != v22)
					goto LABEL_20;
			}
		}
		if (*(_QWORD*)(a1 + 72) < 0xFFFFFFFFui64)
		{
			v24 = *(_DWORD*)(a1 + 56);
			sub_140003460((__int64*)(a1 + 64), &v24);
		}
		else
		{
			v7 = -2147024882;
		}
	}
LABEL_24:
	if (v8)
		(*(void(__fastcall**)(unsigned __int16*, _QWORD, __int64, __int16*))(*((_QWORD*)v8 - 2) + 8i64))(
			(unsigned __int16*)v8 - 8,
			*((_QWORD*)v8 - 2),
			v16,
			v17);
	return v7;
}
// 1406470B2: variable 'v13' is possibly undefined
// 140647101: variable 'v15' is possibly undefined
// 140647178: variable 'v16' is possibly undefined
// 140647178: variable 'v17' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140646FF0: using guessed type _QWORD var_18[3];

