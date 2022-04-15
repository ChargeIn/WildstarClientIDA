//----- (00000001408756A0) ----------------------------------------------------
__int64 __fastcall sub_1408756A0(__int64 a1, __int64* a2)
{
	float v2; // xmm6_4
	float v3; // xmm7_4
	unsigned int v6; // esi
	__int64 v7; // rdi
	int v8; // ebx
	float v9; // xmm7_4
	int v10; // eax

	v2 = *(float*)(a1 + 96) - *(float*)(a1 + 92);
	v3 = 0.0;
	if (v2 != 0.0)
		v3 = (double)(int)sub_1407DDB28() * 0.00003051850947599719 * v2;
	v6 = *(unsigned __int8*)(a1 + 100);
	v7 = *a2;
	v8 = *(_BYTE*)(a1 + 62) & 0x1F;
	v9 = (float)(v3 + *(float*)(a1 + 92)) + *(float*)(a1 + 88);
	v10 = sub_140855A70(a1);
	return (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD, _DWORD, int, int))(v7 + 368))(
		a2,
		*(unsigned __int8*)(a1 + 101),
		0i64,
		v6,
		LODWORD(v9),
		v8,
		v10);
}

