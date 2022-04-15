//----- (000000014057D370) ----------------------------------------------------
__int64 __fastcall sub_14057D370(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	_QWORD* v4; // r15
	int v5; // eax
	__int64 v6; // rbx
	unsigned __int64 v7; // rbp
	__int64 v8; // rdi
	__int64 v9; // rbp
	__int64 v10; // rcx
	int v11; // ecx
	int v12; // eax
	int v13; // ecx
	__int64 v14; // rdi
	__int64 v15; // rcx
	_QWORD* v16; // rdi
	__int64 v18; // [rsp+50h] [rbp+8h] BYREF
	char v19; // [rsp+58h] [rbp+10h] BYREF
	unsigned int v20; // [rsp+5Ch] [rbp+14h]

	v2 = a1 + 664;
	v4 = (_QWORD*)(a2 + 16);
	v18 = 0i64;
	v5 = sub_14058F720(a1 + 664, a2 + 16, &v18);
	v6 = v18;
	if (v5)
	{
		v18 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v18 + 48i64))(v18);
		v7 = (*(__int64(__fastcall**)(__int64*))(v2 + 24))(&v18);
		v8 = *(_QWORD*)(v2 + 16) + 8 * (v7 % *(_QWORD*)(v2 + 8));
		if (*(_QWORD*)v8)
		{
			while (v7 != **(_QWORD**)v8
				|| !(*(unsigned int(__fastcall**)(__int64*, __int64))(v2 + 32))(&v18, *(_QWORD*)v8 + 16i64))
			{
				v8 = *(_QWORD*)v8 + 8i64;
				if (!*(_QWORD*)v8)
					goto LABEL_10;
			}
			v9 = *(_QWORD*)v8;
			*(_QWORD*)v8 = *(_QWORD*)(*(_QWORD*)v8 + 8i64);
			v10 = *(_QWORD*)(v9 + 24);
			if (v10)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
			sub_14018B900(v9, 0);
			--* (_QWORD*)v2;
		}
	LABEL_10:
		(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)v6 + 32i64))(v6, &v19);
		v11 = *(_DWORD*)(*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)v6 + 32i64))(v6, &v18);
		v12 = 200;
		if (*(_DWORD*)(a1 + 16) == 1)
			v12 = 100;
		v13 = v11 - v12;
		if (v13 >= 0 && v13 < *(_DWORD*)(a1 + 632))
		{
			v14 = *(_QWORD*)(*(_QWORD*)(a1 + 624) + 8i64 * v13);
			if (v14)
			{
				if (v20 < *(_DWORD*)(v14 + 16))
				{
					v15 = *(_QWORD*)(*(_QWORD*)(v14 + 8) + 8i64 * v20);
					if (v15)
					{
						if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 48i64))(v15) == *v4)
						{
							v16 = (_QWORD*)(*(_QWORD*)(v14 + 8) + 8i64 * v20);
							if (*v16)
							{
								(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v16 + 8i64))(*v16);
								*v16 = 0i64;
							}
						}
					}
				}
			}
		}
		sub_1404277D0(*(_QWORD*)(qword_140C65898 + 29504), a1, v6, 1);
	}
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

