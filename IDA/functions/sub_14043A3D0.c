#include "../winhttp.h"

//----- (000000014043A3D0) ----------------------------------------------------
signed __int64 __fastcall sub_14043A3D0(
	__int64* a1,
	unsigned __int64 a2,
	__int64 a3,
	__int64 a4,
	unsigned __int8(__fastcall* a5)(__int64, __int64))
{
	__int64* v5; // rdi
	signed __int64 result; // rax
	__int64* v7; // rbx
	__int64* v8; // rbp
	unsigned __int8 v9; // al
	__int64 v10; // rdx
	unsigned __int8 v11; // al
	__int64 v12; // rbp
	__int64* v13; // rdi
	__int64* v14; // rbx
	__int64 v15; // rcx
	__int64 v16; // rdx
	__int64 v17; // rdx
	__int64 v18; // rcx
	__int64* v20; // [rsp+58h] [rbp+10h]
	__int64 v21; // [rsp+68h] [rbp+20h]

	v20 = (__int64*)a2;
	v5 = a1;
	result = (a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF8ui64;
	if (result > 128)
	{
		do
		{
			if (!a4)
				return sub_14043A640(v5, a2, a2, 0i64, a5);
			v7 = (__int64*)(a2 - 8);
			v21 = a4 - 1;
			v8 = &v5[((__int64)(a2 - (_QWORD)v5) >> 3) / 2];
			v9 = a5(*v5, *v8);
			v10 = *v7;
			if (v9)
			{
				if (!a5(*v8, v10))
				{
					v11 = a5(*v5, *v7);
					v8 = v5;
					goto LABEL_9;
				}
			}
			else
			{
				if (!a5(*v5, v10))
				{
					v11 = a5(*v8, *v7);
				LABEL_9:
					if (v11)
						v8 = v7;
					goto LABEL_11;
				}
				v8 = v5;
			}
		LABEL_11:
			v12 = *v8;
			v13 = v20;
			v14 = a1;
			while (1)
			{
				if (a5(*v14, v12))
				{
					do
					{
						v15 = v14[1];
						++v14;
					} while (a5(v15, v12));
				}
				v16 = *--v13;
				if (a5(v12, v16))
				{
					do
						v17 = *--v13;
					while (a5(v12, v17));
				}
				if (v14 >= v13)
					break;
				v18 = *v14++;
				*(v14 - 1) = *v13;
				*v13 = v18;
			}
			result = sub_14043A3D0((_DWORD)v14, (_DWORD)v20, 0, v21, (__int64)a5);
			v5 = a1;
			a4 = v21;
			a2 = (unsigned __int64)v14;
			v20 = v14;
		} while ((__int64)(((char*)v14 - (char*)a1) & 0xFFFFFFFFFFFFFFF8ui64) > 128);
	}
	return result;
}

