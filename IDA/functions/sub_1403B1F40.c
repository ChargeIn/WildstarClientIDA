//----- (00000001403B1F40) ----------------------------------------------------
__int64 __fastcall sub_1403B1F40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	unsigned int v4; // edi
	BOOL v8; // eax
	__int64 v9; // rsi
	unsigned int v10; // r14d
	__int64 v11; // r9
	int v12; // ebx
	__int64 v13; // rdx
	int v14; // eax
	unsigned int* v15; // rax
	__int64 v16; // rcx
	unsigned int* v17; // rbx
	__int64 v18; // rcx
	unsigned int v19; // ebp
	__int64 v20; // rax
	int v21; // esi
	bool v22; // zf
	__int64 v23; // rax
	unsigned __int64 v24; // r8
	unsigned __int64 v25; // rdx
	int* v26; // rcx
	int v28; // [rsp+78h] [rbp+10h] BYREF
	__int64 v29; // [rsp+88h] [rbp+20h]

	v4 = 0;
	v8 = !a4 || !*(_DWORD*)(a4 + 20);
	v9 = v8;
	v10 = 0;
	v29 = v8;
	while (v10 < *(_DWORD*)(a2 + 40))
	{
		v11 = *(_QWORD*)(a2 + 48);
		v12 = 0;
		v13 = 168i64 * v10;
		switch (*(_DWORD*)(v13 + v11 + 16))
		{
		case 0x24:
			if (a3)
				goto LABEL_9;
			goto LABEL_33;
		case 0x26:
			v14 = sub_1403B3F70(a2, v10, a3);
			v12 = v14;
			if (!v14 || v14 == 317)
				goto LABEL_9;
			break;
		case 0x69:
			if (a3)
				goto LABEL_9;
			goto LABEL_33;
		case 0x7B:
			v19 = *(_DWORD*)(v13 + v11 + 64);
			if (a3)
			{
				v20 = sub_140224D00(v19);
				v21 = 0;
				if (v20)
				{
					LOBYTE(v21) = *(_DWORD*)(v20 + 8) != 0;
					++v21;
				}
				v22 = (unsigned int)sub_1403A9C40(a3, v19) == v21;
				v9 = v29;
				if (!v22)
					goto LABEL_9;
				v12 = 320;
			}
			else
			{
			LABEL_33:
				v12 = 30;
			}
			break;
		case 0x7D:
		case 0x88:
			if (!a3)
				goto LABEL_9;
			v23 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v13 + v11 + 64), *(_QWORD*)(a3 + 120));
			if (v23)
			{
				if (!sub_1403BB170(a3, *(_DWORD*)(*(_QWORD*)(v23 + 112) + 4i64)))
					goto LABEL_9;
				v12 = 320;
			}
			else
			{
				v12 = 4;
			}
			break;
		case 0x8B:
			if (!a3)
				goto LABEL_9;
			v15 = (unsigned int*)sub_1402413C0(*(_DWORD*)(qword_140C659D0 + 392));
			v17 = v15;
			if (v15 && (unsigned int)sub_1404ADFE0(v16, *v15))
			{
				if ((unsigned int)sub_1404ADF20(v18, *v17, **(_DWORD**)(a2 + 112)))
				{
					v12 = 0;
				LABEL_9:
					if (!v4 || v4 == 317)
					{
						if (v12)
							v4 = v12;
					}
					goto LABEL_13;
				}
				v12 = 331;
			}
			else
			{
				v12 = 330;
			}
			break;
		default:
			goto LABEL_9;
		}
		if (a4)
		{
			v28 = v12;
			*(_DWORD*)(a4 + 16) = v12;
			if (v12)
			{
				v24 = *(_QWORD*)(a4 + 8);
				v25 = 0i64;
				*(_DWORD*)(a4 + 24) = 1;
				if (v24)
				{
					v26 = *(int**)a4;
					while (*v26 != v12)
					{
						if (*v26 <= v12)
						{
							++v25;
							++v26;
							if (v25 < v24)
								continue;
						}
						goto LABEL_41;
					}
				}
				else
				{
				LABEL_41:
					sub_1401C2E70((__int64*)a4, v25, &v28);
				}
			}
		}
		if (v9)
			return (unsigned int)v12;
		v4 = v12;
	LABEL_13:
		++v10;
	}
	return v4;
}
// 1403B203A: variable 'v16' is possibly undefined
// 1403B204C: variable 'v18' is possibly undefined
// 140C659D0: using guessed type __int64 qword_140C659D0;
// 140C65B70: using guessed type __int64 qword_140C65B70;

