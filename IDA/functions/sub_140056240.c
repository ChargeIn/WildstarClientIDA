//----- (0000000140056240) ----------------------------------------------------
void __fastcall sub_140056240(__int64 a1)
{
	__int64(__fastcall * v2)(_QWORD, int*); // rdi
	unsigned int v3; // esi
	int* v4; // rbx
	unsigned __int16* i; // rcx
	unsigned __int16* v6; // rax
	unsigned __int16* v7; // rax
	int v8; // eax
	__int64 v9; // rcx
	__int64(__fastcall * v10)(__int64(__fastcall*)(__int64), __int64); // rax
	int v11; // [rsp+30h] [rbp-28h] BYREF
	__int64(__fastcall * v12)(); // [rsp+38h] [rbp-20h]
	__int64(__fastcall * v13)(__int64(__fastcall*)(__int64), __int64); // [rsp+40h] [rbp-18h]
	__int64 v14; // [rsp+48h] [rbp-10h]

	v2 = (__int64(__fastcall*)(_QWORD, int*))(*(_QWORD*)(a1 - 5968) + *(_QWORD*)(a1 - 5952));
	v3 = v2(0i64, 0i64);
	if (v3 > 1)
	{
		v4 = sub_14018B280(2i64 * v3, 0);
		if ((unsigned int)v2(v3, v4))
		{
			for (i = (unsigned __int16*)v4; *i; ++i)
				;
			if (i > (unsigned __int16*)v4)
			{
				while (1)
				{
					v6 = i - 1;
					if (*(i - 1) == 92)
						break;
					--i;
					if (v6 <= (unsigned __int16*)v4)
						goto LABEL_13;
				}
				if (i > (unsigned __int16*)v4 && --i > (unsigned __int16*)v4)
				{
					do
					{
						v7 = i - 1;
						if (*(i - 1) == 92)
							break;
						--i;
					} while (v7 > (unsigned __int16*)v4);
				}
			}
		LABEL_13:
			v8 = sub_1400564A0(i);
			v9 = 0i64;
			do
			{
				if (v8 == dword_140C1CF78[v9])
					break;
				++v9;
			} while (!v9);
			if (v9 == 1)
				dword_140C1CF7C = -1090519040;
		}
		sub_14018B900((__int64)v4, 4u);
	}
	if (*(float*)&dword_140C1CF7C >= 0.0)
	{
		v10 = sub_140056560;
		v12 = sub_140056240;
		if (!sub_140056240)
			v10 = 0i64;
		v11 = 1;
		v14 = a1;
		v13 = v10;
		sub_140195960(a1 - 5944, 60000, (__int64)&v11, 4);
	}
}
// 140C1CF78: using guessed type _DWORD dword_140C1CF78[1];
// 140C1CF7C: using guessed type int dword_140C1CF7C;

