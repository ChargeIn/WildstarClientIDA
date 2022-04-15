//----- (000000014083E1D0) ----------------------------------------------------
__int64 __fastcall sub_14083E1D0(__int64 a1, __int64 a2)
{
	__int64 v3; // r12
	int v4; // r14d
	char* v5; // r15
	__int64 v6; // rax
	__int64* v7; // rdi
	unsigned __int64 v8; // rax
	__int64 v9; // rcx
	signed __int64 v10; // rcx
	void* v11; // rsp
	void* v12; // rsp
	__int64 v13; // rcx
	__int64 v14; // rdx
	__int64 v15; // r9
	char* v16; // rsi
	__int64 v17; // rbx
	__int64 v18; // r8
	__int64 v19; // r11
	HANDLE v20; // rax
	int v21; // r14d
	__int64 v22; // rbx
	__int64 v23; // rdi
	unsigned __int16 v24; // ax
	char v26[8]; // [rsp+20h] [rbp+0h] BYREF
	HANDLE hHandle; // [rsp+28h] [rbp+8h]
	int v28; // [rsp+40h] [rbp+20h] BYREF
	__int64 v29; // [rsp+48h] [rbp+28h]

	v3 = a2;
	v4 = 0;
	v5 = 0i64;
	EnterCriticalSection(&stru_140C62878);
	v6 = *(unsigned int*)(a1 + 2024);
	v7 = (__int64*)(a1 + 1776);
	if ((_DWORD)v6)
	{
		v8 = 8 * v6;
		v9 = v8 + 15;
		if (v8 + 15 <= v8)
			v9 = 0xFFFFFFFFFFFFFF0i64;
		v10 = v9 & 0xFFFFFFFFFFFFFFF0ui64;
		v11 = alloca(v10);
		v12 = alloca(v10);
		v13 = *v7;
		LODWORD(v14) = 0;
		v15 = 0i64;
		v5 = v26;
		if (*v7)
			goto LABEL_8;
		do
		{
			v14 = (unsigned int)(v14 + 1);
			if ((unsigned int)v14 >= 0x1F)
				break;
			v13 = v7[v14];
		} while (!v13);
		if (v13)
		{
		LABEL_8:
			v16 = v26;
			while (1)
			{
			LABEL_9:
				while ((*(_BYTE*)(v13 + 120) & 1) != 0)
				{
					*(_QWORD*)v16 = v13;
					v17 = *(_QWORD*)(v13 + 16);
					++v4;
					v16 += 8;
					LODWORD(v18) = v14;
					LODWORD(hHandle) = v14;
					v13 = v17;
					v19 = v15;
					if (!v17)
					{
						do
						{
							v18 = (unsigned int)(v18 + 1);
							if ((unsigned int)v18 >= 0x1F)
								break;
							v13 = v7[v18];
							v19 = 0i64;
						} while (!v13);
						LODWORD(hHandle) = v18;
					}
					if (v15)
						*(_QWORD*)(v15 + 16) = v17;
					else
						v7[(unsigned int)v14] = v17;
					v20 = hHandle;
					--* (_DWORD*)(a1 + 2024);
					v15 = v19;
					v29 = (__int64)v20;
					LODWORD(v14) = (_DWORD)v20;
				LABEL_18:
					if (!v13)
						goto LABEL_19;
				}
				v15 = v13;
				v13 = *(_QWORD*)(v13 + 16);
				if (!v13)
				{
					while (1)
					{
						v14 = (unsigned int)(v14 + 1);
						if ((unsigned int)v14 >= 0x1F)
							goto LABEL_18;
						v13 = v7[v14];
						v15 = 0i64;
						if (v13)
							goto LABEL_9;
					}
				}
			}
		}
	}
LABEL_19:
	LeaveCriticalSection(&stru_140C62878);
	v21 = v4 - 1;
	v22 = v21;
	if (v21 >= 0)
	{
		do
		{
			v23 = *(_QWORD*)&v5[8 * v22];
			hHandle = CreateEventW(0i64, 0, 0, 0i64);
			if ((unsigned int)sub_14083CD40(a1 + 2304, (__int64)v26) == 1)
			{
				sub_1408425E0(v23);
				*(_BYTE*)(v23 + 120) |= 8u;
				*(_QWORD*)(v23 + 80) = v26;
				*(_QWORD*)(v23 + 72) = sub_1408272D0;
				HIWORD(v28) = 24;
				v29 = v23;
				v24 = sub_1403B55D0();
				sub_14082BB30(qword_140C61B68, &v28, v24);
				if ((unsigned int)sub_140828530() == 1)
					WaitForSingleObject(hHandle, 0xFFFFFFFF);
			}
			if (hHandle)
				CloseHandle(hHandle);
			--v22;
		} while (v22 >= 0);
		v3 = a2;
	}
	sub_14083FEA0(a1, v3, 1u);
	return 1i64;
}
// 14083E1D0: using guessed type char var_80[8];

