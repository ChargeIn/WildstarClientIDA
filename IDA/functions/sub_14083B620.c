//----- (000000014083B620) ----------------------------------------------------
void __fastcall sub_14083B620(__int64 a1, unsigned int a2, __int64 a3)
{
	void(__fastcall * v6)(__int64, __int64*); // r14
	int v7; // ebp
	int v8; // eax
	__int64 v9; // rdx
	__int64* v10; // r8
	__int64 v11; // rax
	__int64 v12; // rcx
	_DWORD* v13; // rcx
	int v14; // esi
	__int64 v15[2]; // [rsp+20h] [rbp-28h] BYREF
	unsigned int v16; // [rsp+30h] [rbp-18h]
	int v17; // [rsp+34h] [rbp-14h]

	if (*(_DWORD*)a3 || *(_DWORD*)(a3 + 4))
	{
		LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
	}
	else
	{
		if ((*(_DWORD*)(a3 + 72) & 0x10000) != 0)
			sub_140845490(qword_140C61B60, a2);
		v6 = *(void(__fastcall**)(__int64, __int64*))(a3 + 56);
		v7 = *(_DWORD*)(a3 + 72);
		v15[0] = *(_QWORD*)(a3 + 64);
		v15[1] = *(_QWORD*)(a3 + 16);
		v8 = *(_DWORD*)(a3 + 8);
		v16 = a2;
		v17 = v8;
		v9 = 0i64;
		v10 = (__int64*)(a1 + 8i64 * (a2 % 0x1F));
		v11 = *v10;
		if (*v10)
		{
			while (*(_DWORD*)(v11 + 48) != a2)
			{
				v9 = v11;
				v11 = *(_QWORD*)(v11 + 80);
				if (!v11)
					goto LABEL_13;
			}
			v12 = *(_QWORD*)(v11 + 80);
			if (v9)
				*(_QWORD*)(v9 + 80) = v12;
			else
				*v10 = v12;
			--* (_DWORD*)(a1 + 248);
		}
	LABEL_13:
		v13 = *(_DWORD**)(a3 + 40);
		v14 = dword_140C10F20;
		if (v13)
			sub_140828460(v13);
		sub_140881720(v14, a3);
		if ((v7 & 1) != 0)
		{
			ResetEvent(*(HANDLE*)(a1 + 296));
			LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
			v6(1i64, v15);
			SetEvent(*(HANDLE*)(a1 + 296));
		}
		else
		{
			LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
		}
	}
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B60: using guessed type __int64 qword_140C61B60;

