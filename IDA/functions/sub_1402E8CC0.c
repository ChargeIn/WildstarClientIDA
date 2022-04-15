#include "../winhttp.h"

//----- (00000001402E8CC0) ----------------------------------------------------
void __fastcall sub_1402E8CC0(_QWORD* a1)
{
	int** v1; // rsi
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rdi
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rsi
	__int64 v12; // r10
	unsigned __int16* v13; // rcx
	__int64 v14; // r8
	__int64 v15; // r9
	__int64 v16; // r11
	unsigned __int16 v17; // dx
	unsigned __int16 v18; // dx
	unsigned __int16 v19; // dx
	unsigned __int16 v20; // dx
	unsigned __int16 v21; // dx
	__int64 v22; // [rsp+30h] [rbp+8h] BYREF
	__int64 v23; // [rsp+38h] [rbp+10h] BYREF

	v1 = (int**)(a1 + 41);
	v3 = a1[41];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*v1 = 0i64;
	}
	v4 = a1[5];
	if (v4 && !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 64i64))(v4, 34i64))
	{
		v5 = a1[3];
		v23 = 0i64;
		(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v5 + 72i64))(v5, 34i64, &v23);
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v23 + 24i64))(v23);
		v7 = a1[5];
		v22 = 0i64;
		v8 = v6;
		(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v7 + 72i64))(v7, 34i64, &v22);
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v22 + 24i64))(v22);
		sub_1402DDAC0(34, v1);
		v10 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)*v1 + 24i64))(*v1);
		v11 = 65i64;
		v12 = v10;
		do
		{
			v13 = (unsigned __int16*)(v9 + 2);
			v14 = v8 - v9;
			v15 = v12 - v9;
			v16 = 13i64;
			do
			{
				v17 = *(unsigned __int16*)((char*)v13 + v14 - 2);
				if (v17 < *(v13 - 1))
					v17 = *(v13 - 1);
				*(unsigned __int16*)((char*)v13 + v15 - 2) = v17;
				v18 = *(unsigned __int16*)((char*)v13 + v14);
				if (v18 < *v13)
					v18 = *v13;
				*(unsigned __int16*)((char*)v13 + v15) = v18;
				v19 = *(unsigned __int16*)((char*)v13 + v14 + 2);
				if (v19 < v13[1])
					v19 = v13[1];
				*(unsigned __int16*)((char*)v13 + v15 + 2) = v19;
				v20 = *(unsigned __int16*)((char*)v13 + v14 + 4);
				if (v20 < v13[2])
					v20 = v13[2];
				*(unsigned __int16*)((char*)v13 + v15 + 4) = v20;
				v21 = *(unsigned __int16*)((char*)v13 + v14 + 6);
				if (v21 < v13[3])
					v21 = v13[3];
				v13 += 5;
				*(unsigned __int16*)((char*)v13 + v15 - 4) = v21;
				--v16;
			} while (v16);
			v8 += dword_140C41ADC;
			v9 += dword_140C41ADC;
			v12 += dword_140C41ADC;
			--v11;
		} while (v11);
		if (v22)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
		if (v23)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
	}
}
// 140C41ADC: using guessed type int dword_140C41ADC;

