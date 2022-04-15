//----- (000000014046B920) ----------------------------------------------------
void __fastcall sub_14046B920(__int64 a1, __int64 a2)
{
	__int64 v2; // rbp
	unsigned int v5; // r10d
	BOOL v6; // edx
	__int64 v7; // rcx
	__int64 v8; // rsi
	signed int v9; // edi
	unsigned __int64 v10; // rcx
	_DWORD* v11; // rax
	int v12; // ecx
	int v13; // ecx
	int v14; // ecx
	int v15; // eax

	if (a2)
	{
		v2 = *(_QWORD*)(a1 + 5640);
		if (v2)
		{
			while (1)
			{
				if (*(_DWORD*)(v2 + 4) == 3)
					goto LABEL_40;
				v5 = *(_DWORD*)(v2 + 8);
				if (!v5)
					goto LABEL_40;
				v6 = *(_QWORD*)(qword_140C65898 + 120) == a1 || *(_QWORD*)(qword_140C65898 + 25744) == a1;
				v7 = 0i64;
				if (v6)
					v7 = qword_140C65898;
				if (!v7 || (v8 = sub_1405A5B90(v7, v5)) == 0)
				{
					v8 = sub_1407A0FD0(qword_140C65B70, v5);
					if (!v8)
						goto LABEL_40;
				}
				if (!*(_QWORD*)(v8 + 56))
					goto LABEL_40;
				v9 = sub_140195F70(v2 + 16);
				if (*(_DWORD*)a2)
					break;
				if (*(_DWORD*)(*(_QWORD*)(v8 + 112) + 4i64) == *(_DWORD*)(a2 + 4))
					goto LABEL_27;
			LABEL_40:
				v2 = *(_QWORD*)(v2 + 136);
				if (!v2)
					return;
			}
			switch (*(_DWORD*)a2)
			{
			case 1:
				if (**(_DWORD**)(v8 + 112) != *(_DWORD*)(a2 + 4))
					goto LABEL_40;
				break;
			case 2:
				if (!(*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65B70 + 56i64))(
					qword_140C65B70,
					**(unsigned int**)(v8 + 112),
					*(unsigned int*)(a2 + 4)))
					goto LABEL_40;
				break;
			case 3:
				v10 = 0i64;
				v11 = (_DWORD*)(*(_QWORD*)(v8 + 56) + 4i64);
				while (*v11 != *(_DWORD*)(a2 + 4))
				{
					++v10;
					++v11;
					if (v10 >= 3)
						goto LABEL_40;
				}
				break;
			}
		LABEL_27:
			v12 = *(_DWORD*)(a2 + 8);
			if (v12)
			{
				v13 = v12 - 1;
				if (!v13)
				{
					v9 = (int)(float)((float)v9 * *(float*)(a2 + 12));
					goto LABEL_39;
				}
				v14 = v13 - 1;
				if (v14)
				{
					if (v14 == 1)
						v9 = (int)*(float*)(a2 + 12);
					goto LABEL_39;
				}
				v15 = v9 + (int)*(float*)(a2 + 12);
				if (v15 < 0)
				{
					v9 = 0;
				LABEL_39:
					sub_1407A0320(v2, v9);
					goto LABEL_40;
				}
			}
			else
			{
				v15 = (int)(float)((float)v9 * *(float*)(a2 + 12));
				if (v15 > (unsigned int)v9)
					v15 = v9;
			}
			v9 = v15;
			goto LABEL_39;
		}
	}
}
// 14046B9C9: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

