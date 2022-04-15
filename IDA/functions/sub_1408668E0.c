//----- (00000001408668E0) ----------------------------------------------------
__int64 __fastcall sub_1408668E0(_DWORD* a1, _DWORD* a2)
{
	__int64 result; // rax
	__int64 v3; // rdx

	a1[138] = *a2;
	a1[139] = a2[1];
	a1[140] = a2[2];
	a1[141] = a2[3];
	a1[142] = a2[4];
	a1[143] = a2[5];
	a1[144] = a2[6];
	a1[145] = a2[7];
	a1[146] = a2[8];
	a1[147] = a2[9];
	a1[148] = a2[10];
	a1[149] = a2[11];
	a1[150] = a2[12];
	a1[151] = a2[13];
	a1[152] = a2[14];
	a1[153] = a2[15];
	a1[154] = a2[16];
	result = (unsigned int)a2[17];
	a1[155] = result;
	if (a1[138])
	{
		do
		{
			result = (unsigned int)(a1[138] - 1);
			if ((unsigned int)result < 0x20)
			{
				v3 = (unsigned int)a1[155];
				if (_bittest64(&v3, (unsigned int)result))
					break;
			}
			a1[138] = result;
		} while ((_DWORD)result);
	}
	return result;
}

