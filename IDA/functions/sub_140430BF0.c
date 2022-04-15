#include "../winhttp.h"

//----- (0000000140430BF0) ----------------------------------------------------
void __fastcall sub_140430BF0(__int64 a1, unsigned int a2, int a3, int a4, _DWORD* a5, unsigned int a6, int a7, int a8)
{
	__int64 v8; // rdi
	__int64 v10; // r10
	unsigned __int64 v12; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	int v17; // ebx
	__int64 v19; // rdi
	__int64 v20; // rdx
	int v21; // [rsp+20h] [rbp-68h]
	int v22; // [rsp+28h] [rbp-60h]
	int v23; // [rsp+30h] [rbp-58h]
	__int64(__fastcall * *v26)(); // [rsp+50h] [rbp-38h] BYREF
	int v27; // [rsp+58h] [rbp-30h]
	__int64 v28; // [rsp+60h] [rbp-28h]
	int v29; // [rsp+68h] [rbp-20h]

	v8 = *(_QWORD*)(a1 + 400);
	v10 = *(_QWORD*)(v8 + 32);
	v26 = off_140B569F0;
	v12 = *(_QWORD*)(v10 + 112);
	v28 = v8;
	v29 = 1;
	if (*(_QWORD*)(v10 + 120) >= v12)
		sub_14005E2C0(v8);
	v15 = *(_QWORD*)(v8 + 16);
	v16 = sub_14005C1B0(v8, 0, 0);
	*(_DWORD*)(v15 + 8) = 5;
	*(_QWORD*)v15 = v16;
	*(_QWORD*)(v8 + 16) += 16i64;
	v17 = sub_1400578C0(v8);
	v27 = v17;
	if (a6)
	{
		v19 = a6;
		do
		{
			if (*a5)
				sub_1400FA9E0((__int64)&v26);
			++a5;
			--v19;
		} while (v19);
		v8 = v28;
		v17 = v27;
	}
	v23 = v17;
	v22 = a4;
	v21 = a3;
	sub_1400EA3E0(a1, "CraftingSchematicComplete", "ibiTii", a2, v21, v22, v23, a7, a8);
	if (v8)
		sub_1400579E0(v8, v20, v17);
}
// 140430CF9: variable 'v20' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

