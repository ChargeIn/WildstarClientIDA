//----- (00000001408546E0) ----------------------------------------------------
__int64 __fastcall sub_1408546E0(_BYTE* a1, unsigned int** a2, _DWORD* a3, char a4)
{
	__int64 result; // rax
	unsigned int v9; // edx
	__int64 v10; // r14
	unsigned int v11; // ebx
	unsigned int v12; // edx
	__int64 v13; // rax
	__int64 v14; // r14
	__int64 v15; // rax
	char v16; // cl
	char v17; // r14
	char v18; // dl
	char v19; // cl
	__int64 v20; // rax
	char v21; // dl
	__int64 v22; // rax

	result = (*(__int64(__fastcall**)(_BYTE*))(*(_QWORD*)a1 + 576i64))(a1);
	if ((_DWORD)result == 1 && !a4)
	{
		v9 = *(*a2)++;
		if (v9)
		{
			v10 = sub_140830F00(qword_140C61BA8, v9, 1);
			if (v10)
			{
				(*(void(__fastcall**)(_BYTE*))(*(_QWORD*)a1 + 8i64))(a1);
				v11 = (*(__int64(__fastcall**)(__int64, _BYTE*))(*(_QWORD*)v10 + 72i64))(v10, a1);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 16i64))(v10);
				if (v11 == 1)
					goto LABEL_6;
			}
			else
			{
				return 2;
			}
			return v11;
		}
	LABEL_6:
		v12 = *(*a2)++;
		if (!v12
			|| (v13 = sub_140830F00(qword_140C61BA8, v12, 0), (v14 = v13) == 0)
			|| (v11 = sub_140851560(v13, (__int64)a1),
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 16i64))(v14),
				v11 == 1))
		{
			v15 = (__int64)*a2 + 1;
			v16 = *(_BYTE*)*a2;
			*a2 = (unsigned int*)v15++;
			v17 = *(_BYTE*)(v15 - 1);
			*a2 = (unsigned int*)v15;
			v18 = a1[90];
			v19 = v16 != 0;
			if (((v18 & 0x40) != 0) != v19)
			{
				v20 = *(_QWORD*)a1;
				a1[90] = v18 ^ (v18 ^ (v19 << 6)) & 0x40;
				(*(void(__fastcall**)(_BYTE*))(v20 + 408))(a1);
			}
			v21 = a1[90];
			if (((v21 & 0x20) != 0) != (v17 != 0))
			{
				v22 = *(_QWORD*)a1;
				a1[90] = v21 ^ (v21 ^ (32 * (v17 != 0))) & 0x20;
				(*(void(__fastcall**)(_BYTE*))(v22 + 408))(a1);
			}
			v11 = (*(__int64(__fastcall**)(_BYTE*, unsigned int**, _DWORD*))(*(_QWORD*)a1 + 568i64))(a1, a2, a3);
			if (v11 == 1)
			{
				v11 = (*(__int64(__fastcall**)(_BYTE*, unsigned int**, _DWORD*))(*(_QWORD*)a1 + 584i64))(a1, a2, a3);
				if (v11 == 1)
				{
					v11 = (*(__int64(__fastcall**)(_BYTE*, unsigned int**, _DWORD*))(*(_QWORD*)a1 + 592i64))(a1, a2, a3);
					if (v11 == 1)
					{
						v11 = (*(__int64(__fastcall**)(_BYTE*, unsigned int**, _DWORD*))(*(_QWORD*)a1 + 600i64))(a1, a2, a3);
						if (v11 == 1)
						{
							v11 = sub_140853C70(a1, (int**)a2);
							if (v11 == 1)
							{
								v11 = sub_140854560(a1, a2, a3);
								if (v11 == 1)
									return (unsigned int)sub_140853B70(a1, a2);
							}
						}
					}
				}
			}
		}
		return v11;
	}
	return result;
}
// 140854839: conditional instruction was optimized away because ebx.4==1

