//----- (000000014005B580) ----------------------------------------------------
void __fastcall sub_14005B580(__int64 a1, _QWORD* a2, __int64 a3)
{
	bool v5; // zf
	int v6; // edx
	int v7; // edi
	__int64 v8; // rbp
	__int64 v9; // rdi
	int v10; // ebp
	__int64 v11; // rdi
	__int64 v12; // r14
	__int64 v13; // rax
	__int64 v14; // rbp
	int v15; // eax
	int v16; // eax
	__int64 v17; // [rsp+50h] [rbp+8h] BYREF
	int v18; // [rsp+58h] [rbp+10h] BYREF

	v5 = *((_DWORD*)a2 + 6) == 0;
	v6 = 0;
	if (v5)
		v6 = *(_DWORD*)(a1 + 84);
	sub_14005B320(*(_QWORD*)(a1 + 40), v6, a3, a2);
	v7 = 0;
	if (!*((_DWORD*)a2 + 6))
		v7 = *(_DWORD*)(a1 + 92);
	LODWORD(v17) = v7;
	if (!*((_DWORD*)a2 + 7))
		*((_DWORD*)a2 + 7) = ((__int64(__fastcall*)(_QWORD, __int64*, __int64, _QWORD))a2[1])(*a2, &v17, 4i64, a2[2]);
	v8 = v7;
	if (v7 > 0)
	{
		v9 = 0i64;
		do
		{
			sub_14005B390(*(_QWORD*)(v9 + *(_QWORD*)(a1 + 48)), a2);
			LODWORD(v17) = *(_DWORD*)(v9 + *(_QWORD*)(a1 + 48) + 8);
			if (!*((_DWORD*)a2 + 7))
				*((_DWORD*)a2 + 7) = ((__int64(__fastcall*)(_QWORD, __int64*, __int64, _QWORD))a2[1])(
					*a2,
					&v17,
					4i64,
					a2[2]);
			v18 = *(_DWORD*)(v9 + *(_QWORD*)(a1 + 48) + 12);
			if (!*((_DWORD*)a2 + 7))
				*((_DWORD*)a2 + 7) = ((__int64(__fastcall*)(_QWORD, int*, __int64, _QWORD))a2[1])(*a2, &v18, 4i64, a2[2]);
			v9 += 16i64;
			--v8;
		} while (v8);
	}
	v10 = 0;
	if (!*((_DWORD*)a2 + 6))
		v10 = *(_DWORD*)(a1 + 72);
	LODWORD(v17) = v10;
	if (!*((_DWORD*)a2 + 7))
		*((_DWORD*)a2 + 7) = ((__int64(__fastcall*)(_QWORD, __int64*, __int64, _QWORD))a2[1])(*a2, &v17, 4i64, a2[2]);
	v11 = 0i64;
	v12 = v10;
	if (v10 > 0)
	{
		while (1)
		{
			v13 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v11);
			if (v13)
			{
				v14 = v13 + 32;
				if (v13 != -32)
					break;
			}
			v17 = 0i64;
			if (!*((_DWORD*)a2 + 7))
			{
				v16 = ((__int64(__fastcall*)(_QWORD, __int64*, __int64, _QWORD))a2[1])(*a2, &v17, 8i64, a2[2]);
			LABEL_26:
				*((_DWORD*)a2 + 7) = v16;
			}
		LABEL_27:
			if (++v11 >= v12)
				return;
		}
		v17 = *(_QWORD*)(v13 + 16) + 1i64;
		if (*((_DWORD*)a2 + 7))
			goto LABEL_27;
		v15 = ((__int64(__fastcall*)(_QWORD, __int64*, __int64, _QWORD))a2[1])(*a2, &v17, 8i64, a2[2]);
		*((_DWORD*)a2 + 7) = v15;
		if (v15)
			goto LABEL_27;
		v16 = ((__int64(__fastcall*)(_QWORD, __int64, __int64, _QWORD))a2[1])(*a2, v14, v17, a2[2]);
		goto LABEL_26;
	}
}

