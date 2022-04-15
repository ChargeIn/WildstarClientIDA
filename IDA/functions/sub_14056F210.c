//----- (000000014056F210) ----------------------------------------------------
void __fastcall sub_14056F210(__int64 a1, _QWORD* a2, int a3)
{
	__int64* v5; // rax
	__int64 v6; // r8
	unsigned int v7; // ebp
	__int64* v8; // rax
	int v9; // ebx
	__int64 v10; // rax
	_QWORD* v11; // rcx
	__int64 v12; // rcx
	int v13; // ecx
	int v14; // ecx
	int v15; // ecx
	unsigned int v16; // ecx
	__int64 v17; // rax
	__int64 v18; // rcx
	int v19; // ecx
	int v20; // ecx
	int v21; // ecx
	unsigned int v22; // ecx
	__int64 v23; // rax
	int v24; // eax
	__int64 v25; // rcx
	__int64 v26; // r9
	int v27; // [rsp+20h] [rbp-18h]

	if (a2)
	{
		if (a3 == 6)
		{
			v5 = (__int64*)a2[6];
			v6 = *v5;
			v7 = *(_DWORD*)(*v5 + 64);
		}
		else
		{
			if (a3 != 1)
				return;
			v8 = (__int64*)a2[6];
			v6 = *v8;
			v7 = *(_DWORD*)(*v8 + 68);
		}
		if (v7)
		{
			v9 = *(_DWORD*)(v6 + 76);
			if (v9)
			{
				v10 = *a2;
				v11 = a2;
			LABEL_37:
				v24 = (*(__int64(__fastcall**)(_QWORD*))(v10 + 8))(v11);
				sub_14043BBC0(v25, v9, v7, v26, v27, v24);
				return;
			}
			v12 = *(_QWORD*)(qword_140C65898 + 7152);
			if (v12 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v12 + 24i64))(v12) == 166)
			{
				v13 = *(_DWORD*)(a1 + 8);
				if (v13)
				{
					v14 = v13 - 1;
					if (v14)
					{
						v15 = v14 - 1;
						if (v15)
						{
							if (v15 != 1)
								goto LABEL_22;
							v16 = 461;
						}
						else
						{
							v16 = 459;
						}
					}
					else
					{
						v16 = 457;
					}
				}
				else
				{
					v16 = 455;
				}
				v17 = sub_140200220(v16);
				if (v17)
					v9 = *(_DWORD*)(v17 + 4);
				else
					v9 = 0;
			}
		LABEL_22:
			v18 = *(_QWORD*)(qword_140C65898 + 7152);
			if (!v18 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v18 + 24i64))(v18) != 167)
				goto LABEL_35;
			v19 = *(_DWORD*)(a1 + 8);
			if (v19)
			{
				v20 = v19 - 1;
				if (v20)
				{
					v21 = v20 - 1;
					if (v21)
					{
						if (v21 != 1)
						{
						LABEL_35:
							if (!v9)
								return;
							v10 = *a2;
							v11 = a2;
							goto LABEL_37;
						}
						v22 = 460;
					}
					else
					{
						v22 = 458;
					}
				}
				else
				{
					v22 = 456;
				}
			}
			else
			{
				v22 = 454;
			}
			v23 = sub_140200220(v22);
			if (v23)
				v9 = *(_DWORD*)(v23 + 4);
			else
				v9 = 0;
			goto LABEL_35;
		}
	}
}
// 14056F348: variable 'v25' is possibly undefined
// 14056F348: variable 'v26' is possibly undefined
// 14056F348: variable 'v27' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

