//----- (00000001402BBF90) ----------------------------------------------------
unsigned __int64 __fastcall sub_1402BBF90(_QWORD* a1, float a2, unsigned __int64* a3)
{
	__int64 v3; // r11
	unsigned __int64 result; // rax
	unsigned __int64 v5; // r9
	unsigned __int64 v6; // r10
	__int64 v7; // rdx

	v3 = a1[19];
	if (a2 < *(float*)(v3 + 4i64 * a1[22]))
	{
		v5 = a1[5];
		v6 = 0i64;
		if (v5 > 1)
		{
			do
			{
				if (a2 >= *(float*)(v3
					+ 4i64
					* *(unsigned __int16*)(a1[10] + 2i64 * *(unsigned __int16*)(a1[8] + 2 * ((v5 + v6) >> 1)))))
					v6 = (v5 + v6) >> 1;
				else
					v5 = (v5 + v6) >> 1;
			} while (v5 - v6 > 1);
		}
		v7 = a1[8];
		result = *(unsigned __int16*)(v7 + 2 * v5);
		if ((float)(*(float*)(v3 + 4i64 * *(unsigned __int16*)(a1[10] + 2 * result)) - a2) > (float)(a2
			- *(float*)(v3 + 4i64 * *(unsigned __int16*)(a1[10] + 2i64 * *(unsigned __int16*)(v7 + 2 * v6)))))
			v5 = v6;
		*a3 = v5;
	}
	else
	{
		result = a1[5];
		*a3 = result;
	}
	return result;
}

