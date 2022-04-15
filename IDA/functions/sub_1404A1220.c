//----- (00000001404A1220) ----------------------------------------------------
__int64 __fastcall sub_1404A1220(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	int v7; // eax
	__int64 v8; // rcx
	__int64 v10; // rax
	__int64 v11; // rdi
	__int64 v12; // rax
	unsigned int v13; // ecx
	__int64 v14; // rax
	int v15; // eax
	bool v16; // zf

	if (a2)
	{
		v7 = *(_DWORD*)(a2 + 128);
		if (v7 == 20 || v7 == 23)
		{
			if (a4)
			{
				v8 = sub_1405B15C0((__int64)&qword_140C7DFB0, *(_DWORD*)(a4 + 5932));
				if (v8)
				{
					if (*(_QWORD*)(v8 + 32) == *(_QWORD*)(a2 + 424))
						return 1i64;
					v10 = sub_1405AEA10(v8, *(_DWORD*)(a4 + 5932));
					v11 = v10;
					if (v10)
					{
						v12 = sub_140205FA0(*(_DWORD*)(v10 + 8));
						if (v12)
						{
							v13 = *(_DWORD*)(v11 + 12);
							if (!v13)
								v13 = *(_DWORD*)(v12 + 20);
							v14 = sub_140206C60(v13);
							if (v14)
							{
								v15 = *(_DWORD*)(v14 + 32);
								if ((v15 & 8) != 0)
								{
									if (!sub_1404B6E10(qword_140C659F0))
										goto LABEL_17;
									v16 = *(_DWORD*)(sub_1404B6E10(qword_140C659F0) + 96) == 5;
								}
								else
								{
									if ((v15 & 0x20) == 0 || !sub_1404B6E10(qword_140C659F0))
										goto LABEL_17;
									v16 = *(_DWORD*)(sub_1404B6E10(qword_140C659F0) + 100) == 5;
								}
								if (!v16)
									return a3 == 1;
							LABEL_17:
								if (!--a3)
									return 0i64;
								return a3 == 1;
							}
						}
					}
				}
			}
		}
	}
	return 0i64;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

