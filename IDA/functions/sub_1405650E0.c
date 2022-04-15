//----- (00000001405650E0) ----------------------------------------------------
void __fastcall sub_1405650E0(__int64 a1, __int64 a2, float* a3, _DWORD* a4, unsigned int* a5)
{
	__int64 v5; // r13
	unsigned int v7; // ebp
	float* v9; // r14
	int v10; // r15d
	BOOL v11; // ebx
	__int64 v12; // rax
	unsigned __int64 v13; // rcx
	__int64 v14; // r8
	__int64 v15; // r10
	unsigned __int64 v16; // r9
	_DWORD* v17; // r8
	_DWORD* v18; // rax
	__int64 v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rcx
	__int64 v22; // rbx
	int v23; // edi
	unsigned int v24; // eax
	__int64 v25; // rax
	unsigned __int64 i; // rsi
	unsigned int v27; // ecx
	_DWORD* v28; // rax
	_DWORD* v29; // r14
	__int64 v30; // rbx
	int v31; // edi
	unsigned int v32; // eax

	if (a1)
	{
		v5 = a2;
		v7 = 0;
		v9 = a3;
		v10 = 1500;
		v11 = *(_QWORD*)(a2 + 80) != 0i64;
		v12 = sub_140561C30(qword_140C65B70, *(_DWORD*)(a1 + 5632));
		if (!v12)
		{
			v13 = qword_140C65898;
			if (*(_QWORD*)(qword_140C65898 + 120) == a1)
			{
				v12 = sub_14039DF50(qword_140C65898);
				if (v12)
					v12 = sub_1404695E0(v12);
			}
		}
		if (v11)
		{
			if (v12 && *(_QWORD*)(v12 + 312) == v5)
			{
			LABEL_39:
				*v9 = 1.0;
				return;
			}
			v14 = *(_QWORD*)(v5 + 56);
			if (v14)
			{
				if (v12)
				{
					v15 = *(_QWORD*)(*(_QWORD*)(v12 + 312) + 56i64);
					if (v15)
					{
						v16 = 0i64;
						v17 = (_DWORD*)(v14 + 4);
						while (!*v17)
						{
						LABEL_17:
							++v16;
							++v17;
							if (v16 >= 3)
								goto LABEL_18;
						}
						v13 = 0i64;
						v18 = (_DWORD*)(v15 + 4);
						while (*v18 != *v17)
						{
							++v13;
							++v18;
							if (v13 >= 3)
								goto LABEL_17;
						}
						goto LABEL_39;
					}
				}
			}
		}
	LABEL_18:
		if (sub_1403BD2F0(v13, v5))
		{
			*a4 = 1;
			v19 = *(_QWORD*)(a1 + 5640);
			if (v19)
			{
				while (1)
				{
					if (!*(_DWORD*)(v19 + 4))
					{
						if (*(_QWORD*)(v19 + 32))
						{
							v7 = sub_140195F70(v19 + 16);
							if (v7)
								break;
						}
					}
					v19 = *(_QWORD*)(v19 + 136);
					if (!v19)
						goto LABEL_24;
				}
			}
			else
			{
			LABEL_24:
				v7 = 0;
			}
			v20 = *(_QWORD*)(a1 + 5640);
			if (v20)
			{
				while (*(_DWORD*)(v20 + 4))
				{
					v20 = *(_QWORD*)(v20 + 136);
					if (!v20)
						goto LABEL_28;
				}
				v10 = *(_DWORD*)(v20 + 88);
			}
			else
			{
			LABEL_28:
				v10 = 0;
			}
		}
		if (*(_QWORD*)(qword_140C65898 + 120) == a1)
		{
			v21 = *(_QWORD*)(qword_140C65898 + 28048);
			if (v21)
				v5 = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)v21 + 24i64))(v21, v5, a1, 0i64);
		}
		v22 = *(_QWORD*)(a1 + 5640);
		v23 = **(_DWORD**)(v5 + 112);
		if (v22)
		{
			while (1)
			{
				if (*(_DWORD*)(v22 + 4) == 1 && v23 == *(_DWORD*)(v22 + 12))
				{
					if (*(_QWORD*)(v22 + 32))
					{
						v24 = sub_140195F70(v22 + 16);
						if (v24)
							break;
					}
				}
				v22 = *(_QWORD*)(v22 + 136);
				if (!v22)
					goto LABEL_45;
			}
			if (v24 > v7)
			{
				*a4 = 0;
				v7 = v24;
				v25 = sub_14046A5F0(a1, **(_DWORD**)(v5 + 112));
				if (v25)
					v10 = *(_DWORD*)(v25 + 88);
				else
					v10 = 0;
			}
		}
	LABEL_45:
		if (*(_QWORD*)(v5 + 56))
		{
			for (i = 0i64; i < 0xC; i += 4i64)
			{
				v27 = *(_DWORD*)(i + *(_QWORD*)(v5 + 56) + 4);
				if (v27)
				{
					v28 = (_DWORD*)sub_14023DC80(v27);
					v29 = v28;
					if (v28)
					{
						v30 = *(_QWORD*)(a1 + 5640);
						v31 = *v28;
						if (v30)
						{
							while (1)
							{
								if (*(_DWORD*)(v30 + 4) == 2 && v31 == *(_DWORD*)(v30 + 12))
								{
									if (*(_QWORD*)(v30 + 32))
									{
										v32 = sub_140195F70(v30 + 16);
										if (v32)
											break;
									}
								}
								v30 = *(_QWORD*)(v30 + 136);
								if (!v30)
									goto LABEL_59;
							}
							if (v32 > v7)
							{
								v7 = v32;
								*a4 = 0;
								v10 = v29[1];
								if (!v10)
									v10 = **(_DWORD**)(v5 + 56);
							}
						}
					}
				}
			LABEL_59:
				;
			}
			v9 = a3;
		}
		if (v7)
		{
			*a5 = v7;
			*v9 = 1.0 - (float)((float)(int)v7 / (float)v10);
		}
		else
		{
			*a5 = 0;
			*v9 = 0.0;
		}
	}
}
// 1405651CB: variable 'v13' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

