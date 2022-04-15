//----- (0000000140833840) ----------------------------------------------------
__int64 __fastcall sub_140833840(int a1, float a2)
{
	__int64 result; // rax
	__int64 i; // rbx
	__int64 v6; // rdi
	float v7; // xmm0_4
	float v8; // xmm0_4
	float v9; // xmm1_4
	float v10; // xmm1_4
	int v11; // eax
	int v12; // ecx
	void* retaddr; // [rsp+98h] [rbp+0h] BYREF

	result = (__int64)&retaddr;
	for (i = qword_140C61CC8; i != qword_140C61CD0; i += 8i64)
	{
		v6 = *(_QWORD*)i;
		result = sub_14085CF90((__int64*)(*(_QWORD*)i + 1088i64));
		if ((_DWORD)result == a1)
		{
			v7 = a2 + *(float*)(v6 + 820);
			*(float*)(v6 + 820) = v7;
			v8 = v7 * 0.050000001;
			if (v8 >= -37.0)
			{
				if ((dword_140C61BFC & 1) != 0)
				{
					v10 = *(float*)&dword_140C61BF8;
				}
				else
				{
					v10 = 27866352.0;
					dword_140C61BFC |= 1u;
					dword_140C61BF8 = 1272224376;
				}
				v11 = (int)(float)((float)(v10 * v8) + 1065353200.0);
				v12 = v11 & 0x7FFFFF;
				result = v11 & 0xFF800000;
				v9 = (float)((float)((float)((float)(COERCE_FLOAT(v12 + 1065353216) * 0.32518977) + 0.020805772)
					* COERCE_FLOAT(v12 + 1065353216))
					+ 0.65304345)
					* *(float*)&result;
			}
			else
			{
				v9 = 0.0;
			}
			*(float*)(v6 + 812) = v9;
		}
	}
	return result;
}
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;
// 140C61CC8: using guessed type __int64 qword_140C61CC8;
// 140C61CD0: using guessed type __int64 qword_140C61CD0;

