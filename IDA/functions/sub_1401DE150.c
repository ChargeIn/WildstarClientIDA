#include "../winhttp.h"

//----- (00000001401DE150) ----------------------------------------------------
__int64 __fastcall sub_1401DE150(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rbp
	__int64 v6; // rdi
	char v8; // al
	__int64 v9; // rsi
	int v10; // ebx
	int v11; // eax
	int v12; // eax
	int v13; // ecx
	int v14; // eax
	int v15; // ecx
	__int64 v16; // rbx
	__int64 i; // rax
	__int64 v18; // rax
	int v19; // eax
	int v20; // ecx
	int v21; // eax
	int v22; // ecx
	int v23; // eax
	int v24; // ecx
	int* v26; // [rsp+60h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD*)(v3 + 8);
	v8 = 1;
	v9 = v3;
	if (v6)
	{
		v10 = *(_DWORD*)(a3 + 8);
		do
		{
			v11 = *(_DWORD*)(v6 + 40);
			v9 = v6;
			if (v10 < v11
				|| v10 == v11
				&& ((v12 = *(_DWORD*)(a3 + 12), v13 = *(_DWORD*)(v6 + 44), v12 < v13)
					|| v12 == v13
					&& ((v14 = *(_DWORD*)(a3 + 16), v15 = *(_DWORD*)(v6 + 48), v14 < v15)
						|| v14 == v15 && (int)sub_14018E2C0(*(_QWORD*)a3, *(unsigned __int16**)(v6 + 32)) < 0)))
			{
				v6 = *(_QWORD*)(v6 + 16);
				v8 = 1;
			}
			else
			{
				v6 = *(_QWORD*)(v6 + 24);
				v8 = 0;
			}
		} while (v6);
	}
	v16 = v9;
	if (v8)
	{
		if (v9 == *(_QWORD*)(v3 + 16))
		{
		LABEL_32:
			*(_QWORD*)a2 = *sub_1401DEBA0(a1, &v26, v6, v9, a3);
			*(_BYTE*)(a2 + 8) = 1;
			return a2;
		}
		if (*(_BYTE*)v9 || *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) != v9)
		{
			v16 = *(_QWORD*)(v9 + 16);
			if (v16)
			{
				for (i = *(_QWORD*)(v16 + 24); i; i = *(_QWORD*)(i + 24))
					v16 = i;
			}
			else
			{
				v16 = *(_QWORD*)(v9 + 8);
				if (v9 == *(_QWORD*)(v16 + 16))
				{
					do
					{
						v18 = v16;
						v16 = *(_QWORD*)(v16 + 8);
					} while (v18 == *(_QWORD*)(v16 + 16));
				}
			}
		}
		else
		{
			v16 = *(_QWORD*)(v9 + 24);
		}
	}
	v19 = *(_DWORD*)(v16 + 40);
	v20 = *(_DWORD*)(a3 + 8);
	if (v19 < v20)
		goto LABEL_32;
	if (v19 == v20)
	{
		v21 = *(_DWORD*)(v16 + 44);
		v22 = *(_DWORD*)(a3 + 12);
		if (v21 < v22)
			goto LABEL_32;
		if (v21 == v22)
		{
			v23 = *(_DWORD*)(v16 + 48);
			v24 = *(_DWORD*)(a3 + 16);
			if (v23 < v24 || v23 == v24 && (int)sub_14018E2C0(*(_QWORD*)(v16 + 32), *(unsigned __int16**)a3) < 0)
				goto LABEL_32;
		}
	}
	*(_QWORD*)a2 = v16;
	*(_BYTE*)(a2 + 8) = 0;
	return a2;
}

