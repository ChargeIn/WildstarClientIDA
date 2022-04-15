//----- (000000014083B380) ----------------------------------------------------
__int64 __fastcall sub_14083B380(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
	__int64 v10; // rax
	__int64 v11; // rdi
	unsigned int v12; // ebp
	_DWORD* v13; // rcx
	_DWORD* v14; // rsi
	unsigned int v15; // eax
	unsigned int v16; // ecx
	__int64 v17; // rcx

	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	v10 = sub_1408819F0(dword_140C10F20, 88i64);
	v11 = v10;
	if (v10)
	{
		v12 = 1;
		*(_DWORD*)(v10 + 48) = 0;
		*(_QWORD*)(v10 + 24) = 0i64;
		*(_DWORD*)(v10 + 32) = 0;
		*(_QWORD*)(v10 + 40) = 0i64;
		*(_DWORD*)v10 = 0;
		*(_DWORD*)(v10 + 8) = a6;
		*(_DWORD*)(v10 + 4) = 1;
		*(_QWORD*)(v10 + 16) = *(_QWORD*)a2;
		v13 = *(_DWORD**)(v10 + 40);
		*(_DWORD*)(v10 + 48) = *(_DWORD*)(a2 + 8);
		*(_QWORD*)(v10 + 24) = *(_QWORD*)(a2 + 16);
		*(_DWORD*)(v10 + 32) = *(_DWORD*)(a2 + 24);
		v14 = *(_DWORD**)(a2 + 32);
		if (v13)
			sub_140828460(v13);
		if (v14)
			++* v14;
		v15 = a5;
		*(_QWORD*)(v11 + 40) = v14;
		*(_QWORD*)(v11 + 56) = a3;
		*(_QWORD*)(v11 + 64) = a4;
		if (!a3)
			v15 = a5 & 0xFFFF2004;
		v16 = *(_DWORD*)(v11 + 48);
		*(_DWORD*)(v11 + 72) = v15;
		v17 = v16 % 0x1F;
		*(_QWORD*)(v11 + 80) = *(_QWORD*)(a1 + 8 * v17);
		*(_QWORD*)(a1 + 8 * v17) = v11;
		++* (_DWORD*)(a1 + 248);
	}
	else
	{
		v12 = 2;
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	return v12;
}
// 140C10F20: using guessed type int dword_140C10F20;

