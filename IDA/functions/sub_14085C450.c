//----- (000000014085C450) ----------------------------------------------------
__int64 __fastcall sub_14085C450(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
	float v7; // xmm2_4
	__int64* v9; // rdx
	float v10; // xmm0_4
	__int64 result; // rax
	float v12; // xmm1_4
	float v13; // xmm2_4
	__int64 v14[2]; // [rsp+40h] [rbp-38h] BYREF
	float v15; // [rsp+50h] [rbp-28h]
	float v16; // [rsp+54h] [rbp-24h]
	int v17; // [rsp+58h] [rbp-20h]
	int v18; // [rsp+5Ch] [rbp-1Ch]
	__int16 v19; // [rsp+60h] [rbp-18h]

	v9 = *(__int64**)(a2 + 16);
	v10 = v7;
	if (v9)
		return sub_14083AB80(qword_140C61B70, v9, a7, v7, a6, a5, a4);
	v12 = *(float*)(a2 + 24);
	v13 = 0.0;
	if ((unsigned int)(a4 - 1) <= 1)
		v13 = v10;
	if (v12 == v13 || !a6)
	{
		LOBYTE(a4) = 1;
		return (**(__int64(__fastcall***)(__int64, _QWORD, __int64, __int64))a2)(a2, a7, a3, a4);
	}
	else
	{
		v17 = a6;
		v15 = v12;
		v16 = v13;
		v14[1] = a7;
		v14[0] = a2;
		v18 = a5;
		v19 = 257;
		result = sub_14083A960((_DWORD*)qword_140C61B70, (__int64)v14, 1, 0);
		*(_QWORD*)(a2 + 16) = result;
	}
	return result;
}
// 14085C45D: variable 'v7' is possibly undefined
// 140C61B70: using guessed type __int64 qword_140C61B70;

