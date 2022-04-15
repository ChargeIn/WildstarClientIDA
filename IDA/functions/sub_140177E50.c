//----- (0000000140177E50) ----------------------------------------------------
__int64 __fastcall sub_140177E50(_QWORD* a1)
{
	__int64 v2; // r14
	char* v3; // rax
	__int64 v4; // rsi
	unsigned int v5; // ebp
	int v6; // ebx
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rcx
	unsigned __int16* v11; // rax
	_DWORD* v12; // rdx
	_DWORD* v14; // rax
	_QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

	v2 = sub_140177AC0(a1);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(v15, v3);
	v4 = v15[1];
	v5 = *(_DWORD*)(*(_QWORD*)(v2 + 1040) + 1160i64);
	v6 = 0;
	if (v5)
	{
		while (1)
		{
			v7 = *(_QWORD*)(v2 + 1040);
			if (*(int*)(v7 + 1144) > 0 && v6 >= 0 && v6 < *(_DWORD*)(v7 + 1160))
			{
				v8 = *(_QWORD*)(*(_QWORD*)(v7 + 1152) + 8i64 * v6);
				v9 = *(int*)(v8 + 24) <= 0 ? 0i64 : **(_QWORD**)(v8 + 16);
				if (v9)
				{
					v10 = *(_QWORD*)(v9 + 192);
					v11 = v10
						? (unsigned __int16*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 64i64))(v10)
						: (unsigned __int16*)&unk_1409DC2EC;
					if (!(unsigned int)sub_14018E2C0(v4, v11))
						break;
				}
			}
			if (++v6 >= v5)
				goto LABEL_14;
		}
		v14 = (_DWORD*)a1[2];
		*v14 = 1;
		v14[2] = 1;
	}
	else
	{
	LABEL_14:
		v12 = (_DWORD*)a1[2];
		*v12 = 0;
		v12[2] = 1;
	}
	a1[2] += 16i64;
	if (v4)
		sub_14018B900(v4, 0);
	return 1i64;
}

