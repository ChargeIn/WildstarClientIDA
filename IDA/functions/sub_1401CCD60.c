#include "../winhttp.h"

//----- (00000001401CCD60) ----------------------------------------------------
__int64 __fastcall sub_1401CCD60(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rbp
	__int64 result; // rax
	int v7; // r10d
	__int64 v8; // r11
	unsigned __int16* v9; // r8
	int v10; // ecx
	int v11; // r10d
	unsigned __int16 v12; // r9
	__int64 v13; // r8
	int v14; // edx
	int v15; // ecx
	__int64 v16; // rsi
	__int64 v17; // rcx
	int v18; // edi
	unsigned __int16* v19; // r8
	int v20; // ecx
	unsigned __int16 v21; // r9
	__int64 v22; // r8
	int v23; // edx
	int v24; // ecx
	int v25; // r9d
	int v26; // r11d
	__int64 v27; // r8
	int v28; // edx
	__int64 v29; // r10
	__int64 v30; // rdx
	int v31; // ecx
	__int64 v32; // r11
	int v33; // edi
	unsigned __int16 v34; // r9
	__int64 v35; // r8
	int v36; // edx
	int v37; // ecx
	int v38; // r9d
	int v39; // r10d
	__int64 v40; // r8
	int v41; // edx
	int v42; // r11d
	int v43; // ecx
	unsigned __int16 v44; // r10
	__int64 v45; // r9
	__int64 v46; // r8
	int v47; // edx
	int v48; // ecx

	v3 = 0i64;
	result = a1;
	while ((unsigned int)v3 < *(_DWORD*)(result + 5876))
	{
		v7 = *(unsigned __int16*)(*(_QWORD*)(result + 5880) + 2 * v3);
		v8 = *(unsigned __int8*)(v3 + *(_QWORD*)(result + 5864));
		v3 = (unsigned int)(v3 + 1);
		if (v7)
		{
			v16 = byte_140A47F70[v8];
			v17 = (unsigned int)(v16 + 257);
			v18 = *(unsigned __int16*)(a2 + 4 * v17 + 2);
			v19 = (unsigned __int16*)(a2 + 4 * v17);
			v20 = *(_DWORD*)(result + 5908);
			if (v20 <= 16 - v18)
			{
				*(_WORD*)(result + 5904) |= *v19 << v20;
			}
			else
			{
				v21 = *v19;
				v22 = *(unsigned int*)(result + 40);
				*(_WORD*)(result + 5904) |= v21 << v20;
				*(_BYTE*)(v22 + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5904);
				*(_BYTE*)((unsigned int)++ * (_DWORD*)(result + 40) + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5905);
				v23 = *(_DWORD*)(result + 5908);
				++* (_DWORD*)(result + 40);
				v20 = v23 - 16;
				*(_WORD*)(result + 5904) = v21 >> (16 - v23);
			}
			v24 = v18 + v20;
			*(_DWORD*)(result + 5908) = v24;
			v25 = dword_140A486D0[v16];
			if (v25)
			{
				v26 = v8 - dword_140A48100[v16];
				if (v24 <= 16 - v25)
				{
					*(_WORD*)(result + 5904) |= (_WORD)v26 << v24;
				}
				else
				{
					v27 = *(unsigned int*)(result + 40);
					*(_WORD*)(result + 5904) |= (_WORD)v26 << v24;
					*(_BYTE*)(v27 + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5904);
					*(_BYTE*)((unsigned int)++ * (_DWORD*)(result + 40) + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5905);
					v28 = *(_DWORD*)(result + 5908);
					++* (_DWORD*)(result + 40);
					v24 = v28 - 16;
					*(_WORD*)(result + 5904) = (unsigned __int16)v26 >> (16 - v28);
				}
				*(_DWORD*)(result + 5908) = v25 + v24;
			}
			v29 = (unsigned int)(v7 - 1);
			if ((unsigned int)v29 >= 0x100)
				v30 = byte_140A47D70[((unsigned int)v29 >> 7) + 256];
			else
				v30 = byte_140A47D70[v29];
			v31 = *(_DWORD*)(result + 5908);
			v32 = 4 * v30;
			v33 = *(unsigned __int16*)(4 * v30 + a3 + 2);
			if (v31 <= 16 - v33)
			{
				*(_WORD*)(result + 5904) |= *(_WORD*)(v32 + a3) << v31;
			}
			else
			{
				v34 = *(_WORD*)(v32 + a3);
				v35 = *(unsigned int*)(result + 40);
				*(_WORD*)(result + 5904) |= v34 << v31;
				*(_BYTE*)(v35 + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5904);
				*(_BYTE*)((unsigned int)++ * (_DWORD*)(result + 40) + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5905);
				v36 = *(_DWORD*)(result + 5908);
				++* (_DWORD*)(result + 40);
				v31 = v36 - 16;
				*(_WORD*)(result + 5904) = v34 >> (16 - v36);
			}
			v37 = v33 + v31;
			*(_DWORD*)(result + 5908) = v37;
			v38 = *(_DWORD*)((char*)&unk_140A48650 + v32);
			if (!v38)
				continue;
			v39 = v29 - *(_DWORD*)((char*)&unk_140A48750 + v32);
			if (v37 <= 16 - v38)
			{
				*(_WORD*)(result + 5904) |= (_WORD)v39 << v37;
			}
			else
			{
				v40 = *(unsigned int*)(result + 40);
				*(_WORD*)(result + 5904) |= (_WORD)v39 << v37;
				*(_BYTE*)(v40 + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5904);
				*(_BYTE*)((unsigned int)++ * (_DWORD*)(result + 40) + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5905);
				v41 = *(_DWORD*)(result + 5908);
				++* (_DWORD*)(result + 40);
				v37 = v41 - 16;
				*(_WORD*)(result + 5904) = (unsigned __int16)v39 >> (16 - v41);
			}
			v15 = v38 + v37;
		}
		else
		{
			v9 = (unsigned __int16*)(a2 + 4i64 * (int)v8);
			v10 = *(_DWORD*)(result + 5908);
			v11 = v9[1];
			if (v10 <= 16 - v11)
			{
				*(_WORD*)(result + 5904) |= *v9 << v10;
				v15 = v11 + v10;
			}
			else
			{
				v12 = *v9;
				v13 = *(unsigned int*)(result + 40);
				*(_WORD*)(result + 5904) |= v12 << v10;
				*(_BYTE*)(v13 + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5904);
				*(_BYTE*)((unsigned int)++ * (_DWORD*)(result + 40) + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5905);
				v14 = *(_DWORD*)(result + 5908);
				++* (_DWORD*)(result + 40);
				v15 = v11 + v14 - 16;
				*(_WORD*)(result + 5904) = v12 >> (16 - v14);
			}
		}
		*(_DWORD*)(result + 5908) = v15;
	}
	v42 = *(unsigned __int16*)(a2 + 1026);
	v43 = *(_DWORD*)(result + 5908);
	if (v43 <= 16 - v42)
	{
		*(_WORD*)(result + 5904) |= *(_WORD*)(a2 + 1024) << v43;
		v48 = v42 + v43;
	}
	else
	{
		v44 = *(_WORD*)(a2 + 1024);
		v45 = *(unsigned int*)(result + 40);
		v46 = *(_QWORD*)(result + 16);
		*(_WORD*)(result + 5904) |= v44 << v43;
		*(_BYTE*)(v45 + v46) = *(_BYTE*)(result + 5904);
		*(_BYTE*)((unsigned int)++ * (_DWORD*)(result + 40) + *(_QWORD*)(result + 16)) = *(_BYTE*)(result + 5905);
		v47 = *(_DWORD*)(result + 5908);
		++* (_DWORD*)(result + 40);
		v48 = v47 + v42 - 16;
		*(_WORD*)(result + 5904) = v44 >> (16 - v47);
	}
	*(_DWORD*)(result + 5908) = v48;
	return result;
}
// 140A47D70: using guessed type unsigned __int8[512];
// 140A47F70: using guessed type unsigned __int8 byte_140A47F70[256];
// 140A48100: using guessed type int dword_140A48100[29];
// 140A486D0: using guessed type int dword_140A486D0[29];

