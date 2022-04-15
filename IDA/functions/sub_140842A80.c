//----- (0000000140842A80) ----------------------------------------------------
void __fastcall sub_140842A80(__int64 a1)
{
	__int64 v2; // rdi
	_QWORD* v3; // r14
	__int64 v4; // rax
	__int64* v5; // rbx
	unsigned __int64 v6; // rax
	__int64 v7; // rcx
	void* v8; // rsp
	__int64 v9; // rdx
	void* v10; // rsp
	signed __int64 v11; // rcx
	_QWORD* v12; // r8
	_QWORD* v13; // rsi
	__int128 v14; // xmm6
	__int64 v15; // rax
	__int64 v16; // rax
	int v17; // ecx
	_QWORD v18[2]; // [rsp+20h] [rbp+0h] BYREF
	__int128 v19; // [rsp+30h] [rbp+10h] BYREF
	__int128 v20; // [rsp+40h] [rbp+20h]
	__m128i v21; // [rsp+50h] [rbp+30h] BYREF

	LODWORD(v2) = 0;
	v3 = 0i64;
	EnterCriticalSection(&stru_140C62878);
	v4 = *(unsigned int*)(a1 + 2024);
	v5 = (__int64*)(a1 + 1776);
	if ((_DWORD)v4)
	{
		v6 = 16 * v4;
		v7 = v6 + 15;
		if (v6 + 15 <= v6)
			v7 = 0xFFFFFFFFFFFFFF0i64;
		v11 = v7 & 0xFFFFFFFFFFFFFFF0ui64;
		v8 = alloca(v11);
		v9 = *v5;
		v10 = alloca(v11);
		v3 = v18;
		LODWORD(v11) = 0;
		if (*v5)
			goto LABEL_8;
		do
		{
			v11 = (unsigned int)(v11 + 1);
			if ((unsigned int)v11 >= 0x1F)
				break;
			v9 = v5[v11];
		} while (!v9);
		if (v9)
		{
		LABEL_8:
			v12 = v18;
			do
			{
			LABEL_9:
				if (*(_DWORD*)(v9 + 124))
				{
					LODWORD(v2) = v2 + 1;
					v12 += 2;
					*(v12 - 2) = *(_QWORD*)v9;
					*(v12 - 1) = *(_QWORD*)(v9 + 8);
				}
				v9 = *(_QWORD*)(v9 + 16);
			} while (v9);
			while (1)
			{
				v11 = (unsigned int)(v11 + 1);
				if ((unsigned int)v11 >= 0x1F)
					break;
				v9 = v5[v11];
				if (v9)
					goto LABEL_9;
			}
		}
	}
	LeaveCriticalSection(&stru_140C62878);
	v2 = (int)v2;
	if ((int)v2 > 0)
	{
		v13 = &v3[2 * (int)v2];
		do
		{
			v14 = *((_OWORD*)v13 - 1);
			v13 -= 2;
			--v2;
			v20 = v14;
			EnterCriticalSection(&stru_140C62878);
			v19 = v14;
			v15 = sub_140868CC0((__int64)v5, (__m128i*) & v19);
			if (v15 && *(_DWORD*)(v15 + 124))
			{
				LeaveCriticalSection(&stru_140C62878);
				v18[1] = 0i64;
				LODWORD(v18[0]) = v20;
				v21 = (__m128i)v18[0];
				v16 = sub_140868CC0((__int64)v5, &v21);
				if (v16)
				{
					v17 = *(_DWORD*)(v16 + 124);
					if (v17)
						*(_DWORD*)(v16 + 124) = v17 - 1;
					sub_140842230(v16, 1);
				}
			}
			else
			{
				LeaveCriticalSection(&stru_140C62878);
			}
		} while (v2 > 0);
	}
}
// 140842B59: conditional instruction was optimized away because rdx.8==0

