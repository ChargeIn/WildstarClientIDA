//----- (0000000140100930) ----------------------------------------------------
__int64 __fastcall sub_140100930(__int64 a1, __int64 a2, __int64 a3, int* a4, int a5)
{
	int v8; // ebx
	__int64 v9; // rax
	int* v10; // rsi
	__int64 v11; // rbx
	signed __int64 v12; // rbx
	char* v13; // r14
	unsigned __int64 v14; // rbx
	char* v15; // rax
	unsigned __int64 v16; // rcx
	__int64* v17; // rax
	int* v18; // r8
	__int64 v19; // rax
	int* v20; // rbx
	unsigned __int64 v21; // rcx
	int* v22; // rcx
	signed __int64 v23; // rdx
	__int64 v24; // rcx
	int v25; // eax
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-78h] BYREF
	__int128 v28; // [rsp+28h] [rbp-70h]
	__int64(__fastcall * *v29)(); // [rsp+40h] [rbp-58h] BYREF
	__int128 v30; // [rsp+48h] [rbp-50h]
	__int64 v31; // [rsp+A0h] [rbp+8h] BYREF
	__int64 v32; // [rsp+A8h] [rbp+10h] BYREF
	__int64 v33; // [rsp+B0h] [rbp+18h] BYREF

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = a2;
	*(_QWORD*)a1 = off_140B56C68;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = a3;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_BYTE*)(a1 + 116) &= ~1u;
	if (a4)
	{
		v9 = 0i64;
		v10 = 0i64;
		if (*(_WORD*)a4)
		{
			do
				++v9;
			while (*((_WORD*)a4 + v9));
		}
		v11 = (2 * v9) >> 1;
		if ((unsigned __int64)(v11 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v10 = sub_14018B280(2 * (v11 + 1), 0);
		v12 = 2 * v11;
		sub_1407DB590(v10, a4, v12);
		v13 = (char*)v10 + v12;
		if ((int*)((char*)v10 + v12))
			*(_WORD*)v13 = 0;
		v14 = v12 >> 1;
		if ((v13 - (char*)v10) >> 1)
		{
			WORD1(v31) = 58;
			v15 = (char*)sub_14002C8A0(v10, (__int64)v13, v31);
			if (v15 != v13)
			{
				v16 = (v15 - (char*)v10) >> 1;
				if (v16 != -1i64)
				{
					v33 = (v15 - (char*)v10) >> 1;
					v32 = (v13 - (char*)v10) >> 1;
					v17 = &v32;
					v18 = 0i64;
					if (v14 >= v16)
						v17 = &v33;
					v19 = *v17;
					v20 = (int*)((char*)v10 + 2 * v19);
					v21 = ((2 * v19) >> 1) + 1;
					if (v21 <= 0x7FFFFFFFFFFFFFFEi64)
						v18 = sub_14018B280(2 * v21, 0);
					v22 = v18;
					if (v10 != v20)
					{
						v23 = (char*)v10 - (char*)v18;
						do
						{
							if (v22)
								*(_WORD*)v22 = *(_WORD*)((char*)v22 + v23);
							v22 = (int*)((char*)v22 + 2);
						} while ((int*)((char*)v22 + v23) != v20);
					}
					if (v22)
						*(_WORD*)v22 = 0;
					v24 = (__int64)v10;
					v10 = v18;
					if (v24)
						sub_14018B900(v24, 0);
				}
			}
		}
		sub_140100CD0(a1, a3, v10);
		if (v10)
			sub_14018B900((__int64)v10, 0);
	}
	else
	{
		*(_QWORD*)&v28 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v28 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v29 = TlsValue;
		v31 = 0x141D15018i64;
		v30 = v28;
		v8 = sub_140196F30(&dword_140C8A108, 13, &v31, &v29);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v28 + 1));
		if (v8)
			DebugBreak();
	}
	v25 = a5;
	*(_BYTE*)(a1 + 116) |= 2u;
	*(_DWORD*)(a1 + 112) = 0;
	*(_DWORD*)(a1 + 24) = v25;
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B56C68: using guessed type __int64 (__fastcall *off_140B56C68[6])();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A108: using guessed type _DWORD dword_140C8A108;

