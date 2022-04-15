//----- (00000001402F9F10) ----------------------------------------------------
void __fastcall sub_1402F9F10(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64 v5; // rbp
	__int64 v6; // rdi
	__int64 v7; // rax
	int* v8; // rax
	unsigned int v9; // r9d
	int* v10; // r10
	__int64 v11; // r8
	__int64 v12; // rax
	__int64 v13; // rcx
	unsigned __int64 v14; // r11
	unsigned __int16 v15; // ax
	__int64 v16; // rcx
	int v17; // eax
	__int64 i; // rax
	int v19; // ecx
	__int64 j; // rbx
	__int64 v21; // [rsp+40h] [rbp+8h]
	int* v23; // [rsp+58h] [rbp+20h] BYREF

	if ((*(_BYTE*)(a1 + 48) & 1) != 0)
	{
		v5 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 64i64);
		v6 = 0i64;
		v7 = 4i64 * *(unsigned int*)(v5 + 128);
		if (!is_mul_ok(*(unsigned int*)(v5 + 128), 4ui64))
			v7 = -1i64;
		v8 = sub_14018B280(v7, 0);
		v9 = 0;
		v10 = v8;
		v21 = (__int64)v8;
		if (*(_DWORD*)(v5 + 128))
		{
			while (1)
			{
				v11 = *(_QWORD*)(v5 + 136) + 112i64 * v9;
				if ((*(_BYTE*)(v11 + 56) & 0xA) != 10)
				{
					v12 = *(_QWORD*)(a1 + 64);
					v13 = *(unsigned __int16*)(v11 + 30);
					if ((unsigned int)v13 >= *(_DWORD*)(v12 + 512))
						goto LABEL_10;
					v14 = *(unsigned __int16*)(*(_QWORD*)(v12 + 520) + 4 * v13);
					if (v14 >> 3 < a3[1] && ((unsigned __int8)(1 << (v14 & 7)) & *(_BYTE*)(*a3 + (v14 >> 3))) != 0)
						break;
				}
			LABEL_13:
				v10 = (int*)v21;
				if (++v9 >= *(_DWORD*)(v5 + 128))
					goto LABEL_14;
			}
			v10 = (int*)v21;
		LABEL_10:
			v15 = *(_WORD*)(v11 + 34);
			if (!v15 || *(_DWORD*)(a2 + 4i64 * v15) <= (unsigned int)*(unsigned __int16*)(v11 + 38))
			{
				v10[v6] = v9;
				v6 = (unsigned int)(v6 + 1);
			}
			goto LABEL_13;
		}
	LABEL_14:
		if ((int)sub_14030E7B0(*(_QWORD*)(a1 + 56), v6, v10, &v23) >= 0)
		{
			v16 = _InterlockedExchange64((volatile __int64*)(a1 + 1136), (__int64)v23);
			if (v16)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
		}
		sub_14018B900(v21, 0);
		_InterlockedExchange((volatile __int32*)(a1 + 48), *(_DWORD*)(a1 + 48) | 8);
		v17 = *(_DWORD*)(a1 + 52);
		if ((v17 & 0xE) != 0)
		{
			_InterlockedExchange((volatile __int32*)(a1 + 52), v17 & 0xFFFFFFF1);
			for (i = *(_QWORD*)(a1 + 1216); i; i = *(_QWORD*)(i + 1216))
			{
				v19 = *(_DWORD*)(i + 52);
				if ((v19 & 0x20) == 0)
					break;
				_InterlockedExchange((volatile __int32*)(i + 52), v19 & 0xFFFFFFDF);
			}
		}
		for (j = *(_QWORD*)(a1 + 1232); j; j = *(_QWORD*)(j + 1248))
		{
			if (!*(_DWORD*)(j + 1200))
				sub_1402F9F10(j, a2, a3);
		}
	}
}

