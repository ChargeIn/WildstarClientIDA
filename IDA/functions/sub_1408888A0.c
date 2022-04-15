//----- (00000001408888A0) ----------------------------------------------------
__int64 __fastcall sub_1408888A0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	char v5; // al
	unsigned __int64 v6; // rsi
	unsigned __int64 v7; // rax
	__int64 v8; // rcx
	unsigned __int64 v9; // rdx
	char v10; // r8
	unsigned int v11; // eax
	__int64 v12; // rbp
	unsigned __int64 v13; // rdx
	unsigned int v14; // ecx
	unsigned int v16; // [rsp+70h] [rbp+8h] BYREF
	__int64 v17; // [rsp+78h] [rbp+10h] BYREF

	*a2 = *(_QWORD*)(a1 + 40);
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	v5 = *(_BYTE*)(a1 + 117);
	if ((v5 & 8) != 0 || (v5 & 0x40) == 0)
		goto LABEL_19;
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 56i64))(a1);
	v7 = *(unsigned int*)(a1 + 148);
	if ((_DWORD)v7 && v6 >= v7)
		v6 = *(unsigned int*)(a1 + 144);
	v8 = *(unsigned int*)(a1 + 152);
	v9 = **(_QWORD**)(a1 + 40);
	if (v6 + v8 > v9)
	{
		v10 = 1;
		if (v6 >= v9)
			LODWORD(v8) = 0;
		else
			LODWORD(v8) = v9 - v6;
	}
	else
	{
		v10 = 0;
	}
	v11 = *(_DWORD*)(a1 + 160);
	v16 = v8;
	if (v11 < (unsigned int)v8)
		LODWORD(v8) = v11;
	v12 = sub_140887B00(*(_QWORD*)(a1 + 96), a1, *(_DWORD*)(a1 + 136), v6, v8, *(_DWORD*)(a1 + 164), v10, &v16, &v17);
	if (v12)
	{
		*a3 = v17;
		v13 = *(unsigned int*)(a1 + 148);
		if (v6 >= v13)
		{
			v14 = v16;
		}
		else
		{
			v14 = v16;
			if (v6 + v16 > v13)
			{
				v14 = v13 - v6;
				v16 = v13 - v6;
			}
		}
		*(_DWORD*)(a1 + 156) += v14;
		sub_140885F10(a1);
		*(_QWORD*)(a1 + 88) = *(_QWORD*)(*(_QWORD*)(a1 + 96) + 112i64);
	}
	else
	{
	LABEL_19:
		v12 = 0i64;
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	return v12;
}

