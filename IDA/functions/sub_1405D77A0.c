//----- (00000001405D77A0) ----------------------------------------------------
__int64 __fastcall sub_1405D77A0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 v3; // r9
	unsigned int v7; // edx
	__int64 v8; // rax
	__int64 result; // rax
	int v10; // ebp
	BOOL v11; // r15d
	BOOL v12; // r14d
	__int64 v13; // rax
	__int64 v14; // rcx
	unsigned int v15; // edi
	__int64 v16; // rax
	unsigned int v17; // r8d
	__int64 v18; // rdi
	unsigned int v19; // eax
	unsigned int v20; // ebp
	int v21; // eax

	v3 = *(_QWORD*)(a3 + 56);
	*(_QWORD*)(a1 + 72) = a3;
	*(_QWORD*)(a1 + 80) = v3;
	*(_QWORD*)(a1 + 96) = *a2;
	*(_QWORD*)(a1 + 104) = a2[1];
	*(_QWORD*)(a1 + 112) = a2[2];
	*(_QWORD*)(a1 + 120) = a2[3];
	*(_QWORD*)(a1 + 128) = a2[4];
	*(_QWORD*)(a1 + 136) = a2[5];
	*(_QWORD*)(a1 + 144) = a2[6];
	*(_QWORD*)(a1 + 152) = a2[7];
	*(_QWORD*)(a1 + 160) = a2[8];
	*(_QWORD*)(a1 + 168) = a2[9];
	v7 = *(_DWORD*)(a1 + 96);
	*(_DWORD*)(a1 + 88) = *(_DWORD*)(v3 + 340);
	*(_DWORD*)(a1 + 92) = *(_DWORD*)(a3 + 64);
	v8 = sub_1404E1C50(a1, v7, *(_QWORD*)(qword_140C65898 + 120));
	*(_QWORD*)(a1 + 176) = v8;
	if (!v8)
		return 2147500037i64;
	sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 92));
	v10 = 0;
	v11 = *(_DWORD*)(a1 + 104) != 0;
	v12 = *((_DWORD*)a2 + 4) == 1;
	v13 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 88));
	if ((*(_BYTE*)(*(_QWORD*)(a1 + 176) + 60i64) & 1) != 0)
	{
		v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 80) + 312i64) + 112i64);
		v15 = *(_DWORD*)(v14 + 56);
		if (v15 || (v15 = *(_DWORD*)(v14 + 84)) != 0)
		{
			*(_DWORD*)(a1 + 184) += sub_140543460(*(_QWORD*)(a1 + 80), *(_DWORD*)(a1 + 92), *(_DWORD*)(a1 + 88));
			v16 = sub_140237680(v15);
			if (v16)
			{
				v17 = *(_DWORD*)(v16 + 76);
				if (v17)
					v10 = sub_140542E70(*(_QWORD*)(a1 + 80), 0, v17, 0);
				*(_DWORD*)(a1 + 184) += v10;
			}
		}
	}
	else if (v13)
	{
		v18 = *(_QWORD*)(v13 + 5864);
		v19 = sub_140470540((_DWORD*)v13, *(_DWORD*)(*(_QWORD*)(a1 + 80) + 88i64));
		v20 = v19;
		if (v18)
		{
			if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v18 + 408i64))(v18, v19))
			{
				v21 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)v18 + 432i64))(
					v18,
					v20,
					*(unsigned int*)(*(_QWORD*)(a1 + 80) + 84i64),
					2i64);
				if (v21 != -1)
					*(_DWORD*)(a1 + 184) += v21;
			}
		}
	}
	if (v12)
		(*(void(__fastcall**)(__int64, _QWORD*, _QWORD))(*(_QWORD*)a1 + 8i64))(
			a1,
			a2 + 3,
			(unsigned int)(*((_DWORD*)a2 + 2) + *(_DWORD*)(a1 + 184)));
	result = sub_1405D6880(a1, (__int64)a2, (__int64*)a3);
	if ((int)result >= 0)
	{
		if (!v12 || v11 || *(_DWORD*)(*(_QWORD*)(a1 + 176) + 36i64))
			sub_140195D70(a1 + 192);
		return 0i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

