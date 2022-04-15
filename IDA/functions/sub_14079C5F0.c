//----- (000000014079C5F0) ----------------------------------------------------
void __fastcall sub_14079C5F0(__int64 a1, __int16* a2, unsigned int a3, int a4)
{
	__int64 v8; // rdx
	int v9; // ebx
	int v10; // ebx
	int v11; // ebx
	int* v12; // rax
	__int64 v13; // rcx
	_WORD* v14; // rax
	__int64 v15; // r10
	__int64 v16; // rcx
	char* v17; // r8
	__int16 v18; // dx
	__int64 v19; // r10
	int* v20; // rcx
	__int16 v21; // ax
	__int64 v22; // r10
	int* v23; // rcx
	signed __int64 v24; // rdi
	__int16 v25; // ax
	unsigned int v26; // esi
	int v27[132]; // [rsp+20h] [rbp-248h] BYREF

	if (!a2)
		return;
	LOWORD(v27[0]) = 0;
	sub_1407E4830((int*)((char*)v27 + 2), 0i64, 0x206ui64);
	v9 = a4 - 1;
	if (!v9)
	{
		v22 = 260i64;
		v23 = v27;
		v24 = (char*)a2 - (char*)v27;
		while (v22 != -2147483386)
		{
			v25 = *(_WORD*)((char*)v23 + v24);
			if (!v25)
				break;
			*(_WORD*)v23 = v25;
			v23 = (int*)((char*)v23 + 2);
			if (!--v22)
			{
				v23 = (int*)((char*)v23 - 2);
				break;
			}
		}
		*(_WORD*)v23 = 0;
		goto LABEL_30;
	}
	v10 = v9 - 1;
	if (v10)
	{
		v11 = v10 - 1;
		if (!v11)
		{
			sub_14079C260(v27, v8, a2);
			v12 = v27;
			v13 = 260i64;
			while (*(_WORD*)v12)
			{
				v12 = (int*)((char*)v12 + 2);
				if (!--v13)
					goto LABEL_30;
			}
			v14 = (_WORD*)v27 + 260 - v13;
			v15 = v13;
			v16 = 2147483646i64;
			v17 = (char*)(&unk_1409FA444 - (_UNKNOWN*)v14);
			while (v16)
			{
				v18 = *(_WORD*)((char*)v14 + (_QWORD)v17);
				if (!v18)
					break;
				*v14++ = v18;
				--v16;
				if (!--v15)
				{
					*(v14 - 1) = 0;
					goto LABEL_30;
				}
			}
			*v14 = 0;
			goto LABEL_30;
		}
		if (v11 != 1)
		{
			(*(void(__fastcall**)(__int64, __int16*, _QWORD))(*(_QWORD*)a1 + 16i64))(a1, a2, a3);
			return;
		}
	}
	else
	{
		v19 = 260i64;
		v8 = &unk_1409FA3DC - (_UNKNOWN*)v27;
		v20 = v27;
		while (v19 != -2147483386)
		{
			v21 = *(_WORD*)((char*)v20 + v8);
			if (!v21)
				break;
			*(_WORD*)v20 = v21;
			v20 = (int*)((char*)v20 + 2);
			if (!--v19)
			{
				v20 = (int*)((char*)v20 - 2);
				break;
			}
		}
		*(_WORD*)v20 = 0;
	}
	sub_14079C260(v27, v8, a2);
LABEL_30:
	if (a3)
	{
		v26 = a3 - 1;
		if (v26)
		{
			if (v26 != 1)
				return;
			sub_14079BDF0(a1 + 120, v27);
		}
		sub_14079BDF0(a1 + 64, v27);
	}
	sub_14079BDF0(a1 + 8, v27);
}
// 14079C6A6: conditional instruction was optimized away because rcx.8!=0
// 14079C6BE: conditional instruction was optimized away because rcx.8!=0
// 14079C701: conditional instruction was optimized away because r10.8!=0
// 14079C756: conditional instruction was optimized away because r10.8!=0
// 14079C7A7: conditional instruction was optimized away because r10.8!=0
// 14079C67C: variable 'v8' is possibly undefined

