//----- (00000001403514F0) ----------------------------------------------------
void __fastcall sub_1403514F0(__int64 a1, int* a2, __int64 a3)
{
	__int64 v3; // r13
	__int64 v7; // rbx
	unsigned int v8; // ebp
	int* v9; // rbx
	__int64 v10; // rsi
	__int16 v11; // ax
	unsigned __int64 v12; // rdx
	unsigned __int64 v13; // rcx
	__int64 v14; // rax
	unsigned int v16; // edi
	int* v17; // rdx
	_QWORD* v18; // r8
	__int64 v19; // rax
	__int64 v20; // rax
	char* v21; // rdx
	char* v22; // rdi
	__int64 v23; // rcx
	unsigned __int64 v24; // r8
	int* v25; // rdx
	__int64 v26; // r8
	__int64 v27; // rcx
	unsigned int v28; // ebx
	__int64 v29; // [rsp+60h] [rbp+8h]
	__int64 v30; // [rsp+78h] [rbp+20h]

	v3 = 2i64;
	v30 = *(_QWORD*)(a1 + 8);
	*(_DWORD*)a1 = 0;
	*(_QWORD*)(a1 + 8) = 0i64;
	v29 = 2i64;
	do
	{
		v7 = *(_QWORD*)(a1 + 8);
		if (v7)
			sub_1407DB590(*(int**)(a1 + 8), a2, *(unsigned int*)(a3 + 8));
		v8 = 0;
		v9 = (int*)(*(unsigned int*)(a3 + 8) + v7);
		if (*(_DWORD*)(a3 + 12))
		{
			while (1)
			{
				v10 = *(_QWORD*)(a3 + 16) + 40i64 * v8;
				v11 = *(_WORD*)(v10 + 8);
				if (v11 != 130)
				{
					if (v11 != 128)
						goto LABEL_40;
					if ((*(_BYTE*)(v10 + 24) & 0x10) != 0)
						goto LABEL_40;
					v22 = (char*)a2 + *(unsigned int*)(v10 + 12);
					v23 = *(_QWORD*)v22;
					if (!*(_QWORD*)v22)
						goto LABEL_40;
					if (*(_QWORD*)(a1 + 8))
					{
						v24 = *((unsigned int*)v22 + 2);
						if (v24 + v23 <= qword_140C3FE70)
							v25 = (int*)(v23 + qword_140C3FE68);
						else
							v25 = 0i64;
						sub_1407DB590(v9, v25, v24);
						v26 = *((unsigned int*)v22 + 2);
						v27 = *(_QWORD*)(a1 + 8) + *(unsigned int*)(v10 + 12);
						if (v9 && (_DWORD)v26 && (unsigned __int64)v9 + v26 - qword_140C3FE68 <= qword_140C3FE70)
						{
							*(_QWORD*)v27 = (char*)v9 - qword_140C3FE68;
							*(_DWORD*)(v27 + 8) = v26;
						}
						else
						{
							*(_DWORD*)(v27 + 8) = 0;
							*(_QWORD*)v27 = 0i64;
						}
					}
					v19 = *((unsigned int*)v22 + 2);
					goto LABEL_39;
				}
				v12 = *(_QWORD*)((char*)a2 + *(unsigned int*)(v10 + 12));
				if (!v12 || v12 > qword_140C3FE70 || !(v12 + qword_140C3FE68))
					goto LABEL_40;
				if (v12 <= qword_140C3FE70)
					v13 = v12 + qword_140C3FE68;
				else
					v13 = 0i64;
				v14 = -1i64;
				while (*(_WORD*)(v13 + 2 * v14++ + 2) != 0)
					;
				v16 = 2 * v14 + 2;
				if (!*(_QWORD*)(a1 + 8))
					goto LABEL_25;
				v17 = v12 <= qword_140C3FE70 ? (int*)(qword_140C3FE68 + v12) : 0i64;
				sub_1407DB590(v9, v17, v16);
				v18 = (_QWORD*)(*(_QWORD*)(a1 + 8) + *(unsigned int*)(v10 + 12));
				if (v9)
					break;
				*v18 = 0i64;
				v19 = v16;
			LABEL_39:
				v9 = (int*)((char*)v9 + v19);
			LABEL_40:
				if (++v8 >= *(_DWORD*)(a3 + 12))
				{
					v3 = v29;
					goto LABEL_42;
				}
			}
			v20 = 0i64;
			if (*(_WORD*)v9)
			{
				do
					++v20;
				while (*((_WORD*)v9 + v20));
			}
			v21 = (char*)v9 - qword_140C3FE68;
			if ((unsigned __int64)v9 + 2 * v20 - qword_140C3FE68 > qword_140C3FE70)
				v21 = 0i64;
			*v18 = v21;
		LABEL_25:
			v19 = v16;
			goto LABEL_39;
		}
	LABEL_42:
		if (!*(_QWORD*)(a1 + 8))
		{
			v28 = (_DWORD)v9 - *(_DWORD*)(a1 + 8);
			*(_DWORD*)a1 = v28;
			*(_QWORD*)(a1 + 8) = sub_14018B280(v28, 0);
		}
		v29 = --v3;
	} while (v3);
	sub_14018B900(v30, 0);
}
// 140351756: ignored the value written to the shadow area of the succeeding call
// 1403515BC: conditional instruction was optimized away because rdx.8!=0
// 1403515FD: conditional instruction was optimized away because rdx.8!=0
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

