#include "../winhttp.h"

//----- (00000001407DB590) ----------------------------------------------------
int* __fastcall sub_1407DB590(int* a1, int* a2, unsigned __int64 a3)
{
	int* v3; // r11
	int* v4; // r10
	bool v5; // cf
	unsigned __int64 v6; // rdx
	int* result; // rax
	unsigned __int64 v8; // r9
	unsigned __int64 v9; // r9
	int* v10; // r10
	__int16 v11; // cx
	int v12; // ecx
	int v13; // ecx
	char v14; // al
	__int16 v15; // cx
	int v16; // edx
	__int64 v17; // rcx
	__int64 v18; // rcx
	char v19; // al
	__int16 v20; // cx
	__int64 v21; // rdx
	__int64 v22; // rcx
	char v23; // al
	int v24; // ecx
	__int64 v25; // rdx
	__int16 v26; // ax
	int v27; // ecx
	__int64 v28; // rdx
	char v29; // r8
	__int16 v30; // ax
	int v31; // ecx
	__int64 v32; // rdx
	__int64 v33; // rax
	__int64 v34; // r10
	__int64 v35; // r10
	int v36; // eax
	int v37; // eax
	__int64 v38; // r10
	__int64 v39; // r10
	__int64 v40; // r9
	__int64 v41; // r10
	__int64 v42; // r10
	int* v43; // rcx
	unsigned __int64 v44; // r9
	unsigned __int64 v45; // r9
	__int64 v46; // rax
	__int64 v47; // r10
	__int64 v48; // r10
	int v49; // eax
	int v50; // eax
	__int64 v51; // r10
	__int64 v52; // r10
	__int64 v53; // r9
	__int64 v54; // r10
	__int64 v55; // r10
	void* retaddr; // [rsp+0h] [rbp+0h] BYREF

	v3 = a1;
	v4 = a2;
	if (a3 <= 0x10)
	{
		v10 = a1;
	}
	else
	{
		v5 = a2 < a1;
		v6 = (char*)a2 - (char*)a1;
		if (v5 && (__int64)a1 < (__int64)((__int64)v4 + a3))
		{
			v43 = (int*)((char*)a1 + a3);
			if (((unsigned __int8)v43 & 7) != 0)
			{
				if (((unsigned __int8)v43 & 1) != 0)
				{
					v43 = (int*)((char*)v43 - 1);
					--a3;
					*(_BYTE*)v43 = *((_BYTE*)v43 + v6);
				}
				if (((unsigned __int8)v43 & 2) != 0)
				{
					v43 = (int*)((char*)v43 - 2);
					a3 -= 2i64;
					*(_WORD*)v43 = *(_WORD*)((char*)v43 + v6);
				}
				if (((unsigned __int8)v43 & 4) != 0)
				{
					--v43;
					a3 -= 4i64;
					*v43 = *(int*)((char*)v43 + v6);
				}
			}
			while (1)
			{
				v44 = a3 >> 5;
				if (!(a3 >> 5))
					break;
				if (v44 < 0x2000 || v6 > 0xFFFFFFFFFFFFF000ui64)
				{
					do
					{
						v46 = *(_QWORD*)((char*)v43 + v6 - 8);
						v47 = *(_QWORD*)((char*)v43 + v6 - 16);
						v43 -= 8;
						*((_QWORD*)v43 + 3) = v46;
						*((_QWORD*)v43 + 2) = v47;
						v48 = *(_QWORD*)((char*)v43 + v6);
						--v44;
						*((_QWORD*)v43 + 1) = *(_QWORD*)((char*)v43 + v6 + 8);
						*(_QWORD*)v43 = v48;
					} while (v44);
					a3 &= 0x1Fu;
					break;
				}
				do
				{
					v49 = 32;
					do
					{
						v43 -= 32;
						_mm_prefetch((const char*)v43 + v6, 0);
						_mm_prefetch((const char*)v43 + v6 + 64, 0);
						--v49;
					} while (v49);
					v43 += 1024;
					v50 = 64;
					do
					{
						v51 = *(_QWORD*)((char*)v43 + v6 - 16);
						_mm_stream_si32(v43 - 2, *(_QWORD*)((char*)v43 + v6 - 8));
						_mm_stream_si32(v43 - 4, v51);
						v52 = *(_QWORD*)((char*)v43 + v6 - 32);
						_mm_stream_si32(v43 - 6, *(_QWORD*)((char*)v43 + v6 - 24));
						_mm_stream_si32(v43 - 8, v52);
						v53 = *(_QWORD*)((char*)v43 + v6 - 40);
						v54 = *(_QWORD*)((char*)v43 + v6 - 48);
						v43 -= 16;
						_mm_stream_si32(v43 + 6, v53);
						_mm_stream_si32(v43 + 4, v54);
						v55 = *(_QWORD*)((char*)v43 + v6);
						--v50;
						_mm_stream_si32(v43 + 2, *(_QWORD*)((char*)v43 + v6 + 8));
						_mm_stream_si32(v43, v55);
					} while (v50);
					a3 -= 4096i64;
				} while (a3 >= 0x1000);
				_InterlockedOr8((volatile signed __int8*)&retaddr, 0);
			}
			v45 = a3 >> 3;
			if (a3 >> 3)
			{
				do
				{
					v43 -= 2;
					--v45;
					*(_QWORD*)v43 = *(_QWORD*)((char*)v43 + v6);
				} while (v45);
				a3 &= 7u;
			}
			if (!a3)
				return v3;
			v10 = (int*)((char*)v43 - a3);
			a2 = (int*)((char*)v43 + v6 - a3);
		}
		else
		{
			if (_bittest(&dword_140C60170, 1u))
			{
				qmemcpy(a1, v4, a3);
				return a1;
			}
			if (((unsigned __int8)a1 & 7) != 0)
			{
				if (((unsigned __int8)a1 & 1) != 0)
				{
					--a3;
					*(_BYTE*)a1 = *((_BYTE*)a1 + v6);
					a1 = (int*)((char*)a1 + 1);
				}
				if (((unsigned __int8)a1 & 2) != 0)
				{
					a3 -= 2i64;
					*(_WORD*)a1 = *(_WORD*)((char*)a1 + v6);
					a1 = (int*)((char*)a1 + 2);
				}
				if (((unsigned __int8)a1 & 4) != 0)
				{
					a3 -= 4i64;
					*a1 = *(int*)((char*)a1 + v6);
					++a1;
				}
			}
			while (1)
			{
				v8 = a3 >> 5;
				if (!(a3 >> 5))
					break;
				if (v8 < 0x2000 || v6 < 0x1000)
				{
					do
					{
						v33 = *(_QWORD*)((char*)a1 + v6);
						v34 = *(_QWORD*)((char*)a1 + v6 + 8);
						a1 += 8;
						*((_QWORD*)a1 - 4) = v33;
						*((_QWORD*)a1 - 3) = v34;
						v35 = *(_QWORD*)((char*)a1 + v6 - 8);
						--v8;
						*((_QWORD*)a1 - 2) = *(_QWORD*)((char*)a1 + v6 - 16);
						*((_QWORD*)a1 - 1) = v35;
					} while (v8);
					a3 &= 0x1Fu;
					break;
				}
				do
				{
					v36 = 32;
					do
					{
						_mm_prefetch((const char*)a1 + v6, 0);
						_mm_prefetch((const char*)a1 + v6 + 64, 0);
						a1 += 32;
						--v36;
					} while (v36);
					a1 -= 1024;
					v37 = 64;
					do
					{
						v38 = *(_QWORD*)((char*)a1 + v6 + 8);
						_mm_stream_si32(a1, *(_QWORD*)((char*)a1 + v6));
						_mm_stream_si32(a1 + 2, v38);
						v39 = *(_QWORD*)((char*)a1 + v6 + 24);
						_mm_stream_si32(a1 + 4, *(_QWORD*)((char*)a1 + v6 + 16));
						_mm_stream_si32(a1 + 6, v39);
						v40 = *(_QWORD*)((char*)a1 + v6 + 32);
						v41 = *(_QWORD*)((char*)a1 + v6 + 40);
						a1 += 16;
						_mm_stream_si32(a1 - 8, v40);
						_mm_stream_si32(a1 - 6, v41);
						v42 = *(_QWORD*)((char*)a1 + v6 - 8);
						--v37;
						_mm_stream_si32(a1 - 4, *(_QWORD*)((char*)a1 + v6 - 16));
						_mm_stream_si32(a1 - 2, v42);
					} while (v37);
					a3 -= 4096i64;
				} while (a3 >= 0x1000);
				_InterlockedOr8((volatile signed __int8*)&retaddr, 0);
			}
			v9 = a3 >> 3;
			if (a3 >> 3)
			{
				do
				{
					*(_QWORD*)a1 = *(_QWORD*)((char*)a1 + v6);
					a1 += 2;
					--v9;
				} while (v9);
				a3 &= 7u;
			}
			if (!a3)
				return v3;
			a2 = (int*)((char*)a1 + v6);
			v10 = a1;
		}
	}
	switch (a3)
	{
	case 0ui64:
		result = v3;
		break;
	case 1ui64:
		*(_BYTE*)v10 = *(_BYTE*)a2;
		result = v3;
		break;
	case 2ui64:
		*(_WORD*)v10 = *(_WORD*)a2;
		result = v3;
		break;
	case 3ui64:
		v11 = *(_WORD*)((char*)a2 + 1);
		*(_BYTE*)v10 = *(_BYTE*)a2;
		*(_WORD*)((char*)v10 + 1) = v11;
		result = v3;
		break;
	case 4ui64:
		*v10 = *a2;
		result = v3;
		break;
	case 5ui64:
		v12 = *(int*)((char*)a2 + 1);
		*(_BYTE*)v10 = *(_BYTE*)a2;
		*(int*)((char*)v10 + 1) = v12;
		result = v3;
		break;
	case 6ui64:
		v13 = *(int*)((char*)a2 + 2);
		*(_WORD*)v10 = *(_WORD*)a2;
		*(int*)((char*)v10 + 2) = v13;
		result = v3;
		break;
	case 7ui64:
		v14 = *(_BYTE*)a2;
		v15 = *(_WORD*)((char*)a2 + 1);
		v16 = *(int*)((char*)a2 + 3);
		*(_BYTE*)v10 = v14;
		*(_WORD*)((char*)v10 + 1) = v15;
		*(int*)((char*)v10 + 3) = v16;
		result = v3;
		break;
	case 8ui64:
		*(_QWORD*)v10 = *(_QWORD*)a2;
		result = v3;
		break;
	case 9ui64:
		v17 = *(_QWORD*)((char*)a2 + 1);
		*(_BYTE*)v10 = *(_BYTE*)a2;
		*(_QWORD*)((char*)v10 + 1) = v17;
		result = v3;
		break;
	case 0xAui64:
		v18 = *(_QWORD*)((char*)a2 + 2);
		*(_WORD*)v10 = *(_WORD*)a2;
		*(_QWORD*)((char*)v10 + 2) = v18;
		result = v3;
		break;
	case 0xBui64:
		v19 = *(_BYTE*)a2;
		v20 = *(_WORD*)((char*)a2 + 1);
		v21 = *(_QWORD*)((char*)a2 + 3);
		*(_BYTE*)v10 = v19;
		*(_WORD*)((char*)v10 + 1) = v20;
		*(_QWORD*)((char*)v10 + 3) = v21;
		result = v3;
		break;
	case 0xCui64:
		v22 = *(_QWORD*)(a2 + 1);
		*v10 = *a2;
		*(_QWORD*)(v10 + 1) = v22;
		result = v3;
		break;
	case 0xDui64:
		v23 = *(_BYTE*)a2;
		v24 = *(int*)((char*)a2 + 1);
		v25 = *(_QWORD*)((char*)a2 + 5);
		*(_BYTE*)v10 = v23;
		*(int*)((char*)v10 + 1) = v24;
		*(_QWORD*)((char*)v10 + 5) = v25;
		result = v3;
		break;
	case 0xEui64:
		v26 = *(_WORD*)a2;
		v27 = *(int*)((char*)a2 + 2);
		v28 = *(_QWORD*)((char*)a2 + 6);
		*(_WORD*)v10 = v26;
		*(int*)((char*)v10 + 2) = v27;
		*(_QWORD*)((char*)v10 + 6) = v28;
		result = v3;
		break;
	case 0xFui64:
		v29 = *(_BYTE*)a2;
		v30 = *(_WORD*)((char*)a2 + 1);
		v31 = *(int*)((char*)a2 + 3);
		v32 = *(_QWORD*)((char*)a2 + 7);
		*(_BYTE*)v10 = v29;
		*(_WORD*)((char*)v10 + 1) = v30;
		*(int*)((char*)v10 + 3) = v31;
		*(_QWORD*)((char*)v10 + 7) = v32;
		result = v3;
		break;
	case 0x10ui64:
		*(__m128i*)v10 = _mm_loadu_si128((const __m128i*)a2);
		result = v3;
		break;
	}
	return result;
}
// 140C60170: using guessed type int dword_140C60170;

