//----- (00000001407AC2C0) ----------------------------------------------------
__int64 __fastcall sub_1407AC2C0(_QWORD* a1, __int64 a2, __int64 a3, int a4, int a5)
{
	unsigned int v5; // ebp
	unsigned __int64 v11; // r10
	int v12; // r9d
	__int64 v13; // r11
	__int64 v14; // rax
	unsigned __int16* v15; // rbx
	__int64 v16; // r8
	unsigned __int16* v17; // rax
	__int64 v18; // r8
	int v19; // ecx
	int v20; // edx
	__int64 v21; // rbx
	unsigned int* v22; // rax
	int v23; // eax
	int v24; // edi
	__int64 v25; // rbx

	v5 = 0;
	if (!*(_DWORD*)(a2 + 144))
		return 0i64;
	v11 = a1[18];
	v12 = 0;
	if (v11)
	{
		v13 = a1[17];
		v14 = 0i64;
		v15 = (unsigned __int16*)(a2 + 68);
		while (1)
		{
			v16 = *(_QWORD*)(v13 + 8 * v14);
			v17 = v15;
			v18 = v16 + 68 - (_QWORD)v15;
			do
			{
				v19 = *(unsigned __int16*)((char*)v17 + v18);
				v20 = *v17 - v19;
				if (v20)
					break;
				++v17;
			} while (v19);
			if (!v20)
				break;
			v14 = (unsigned int)++v12;
			if ((unsigned int)v12 >= v11)
				goto LABEL_10;
		}
	}
	else
	{
	LABEL_10:
		v12 = -1;
	}
	v21 = 8i64 * v12;
	v22 = *(unsigned int**)(a1[17] + v21);
	if (!v22[95])
	{
		v23 = (*(__int64(__fastcall**)(_QWORD*, _QWORD))(*a1 + 352i64))(a1, *v22);
		v24 = v23;
		if (a4 && v23)
			*(_DWORD*)(*(_QWORD*)(a1[17] + v21) + 380i64) = 1;
		v25 = a1[17] + v21;
		*(_DWORD*)(*(_QWORD*)v25 + 384i64) = sub_14018CDF0();
		if (a5 && v24)
		{
			if ((*(unsigned int(__fastcall**)(_QWORD*, __int64, __int64, __int64))(*a1 + 136i64))(a1, a2, a3, 1i64))
				v5 = 1;
			sub_14018CDF0();
			sub_1400035B0();
		}
	}
	return v5;
}

