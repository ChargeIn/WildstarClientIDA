//----- (00000001406E4FC0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1406E4FC0(__int64 a1, __int64 a2)
{
	unsigned __int8 v3; // dl
	__int64 v5; // rax
	int v7; // ebp
	__int64 i; // r15
	_QWORD* v9; // rcx
	__int64 v10; // r14
	unsigned __int64 v11; // rsi
	_QWORD* v12; // rbx
	int v13; // r8d

	v3 = *(_BYTE*)(a2 + 68);
	v5 = *(_QWORD*)a2;
	if (v3)
	{
		if ((unsigned int)v3 < *(_DWORD*)(*(_QWORD*)v5 + 20i64))
			return sub_1406E4720(a1, a2, 2);
		else
			return sub_1406E4720(a1, a2, 3);
	}
	else if ((*(_BYTE*)(*(_QWORD*)v5 + 16i64) & 1) != 0)
	{
		return sub_1406E4720(a1, a2, 1);
	}
	else
	{
		v7 = 0;
		for (i = 0i64; ; i += 8i64)
		{
			v9 = *(_QWORD**)(i + *(_QWORD*)a2 + 8);
			if (v9)
			{
				v10 = *v9;
				v11 = (*(__int64(__fastcall**)(_QWORD))(a1 + 2440))(*v9);
				v12 = *(_QWORD**)(*(_QWORD*)(a1 + 2432) + 8 * (v11 % *(_QWORD*)(a1 + 2424)));
				if (v12)
				{
					while (v11 != *v12 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 2448))(v10, v12 + 2))
					{
						v12 = (_QWORD*)v12[1];
						if (!v12)
							goto LABEL_13;
					}
					if (v12 != (_QWORD*)-24i64 && (unsigned int)(*(_DWORD*)(v12[3] + 64i64) - 2) <= 1)
						break;
				}
			}
		LABEL_13:
			if ((unsigned int)++v7 >= 6)
			{
				v13 = 0;
				return sub_1406E4720(a1, a2, v13);
			}
		}
		v13 = 1;
		return sub_1406E4720(a1, a2, v13);
	}
}

