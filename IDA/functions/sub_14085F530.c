//----- (000000014085F530) ----------------------------------------------------
__int64 __fastcall sub_14085F530(__int64 a1, float* a2)
{
	__int64 result; // rax
	float v5; // xmm0_4
	float v6; // xmm1_4

	result = *(int*)a2;
	switch ((int)result)
	{
	case 0:
	case 4:
		if (*(char*)(a1 + 382) >= 0 || !*((_BYTE*)a2 + 16))
		{
			*(float*)(a1 + 284) = a2[8] + *(float*)(a1 + 284);
			result = sub_14085D440(a1);
			if (*((_BYTE*)a2 + 16))
			{
				result = *(_QWORD*)(a1 + 496);
				if (result)
					*(float*)(result + 12) = a2[8] + *(float*)(result + 12);
			}
		}
		return result;
	case 2:
		goto LABEL_8;
	case 3:
		v5 = a2[8] + *(float*)(a1 + 288);
		*(float*)(a1 + 288) = v5;
		*(float*)(a1 + 212) = v5 + *(float*)(a1 + 292);
		return result;
	case 8:
		v6 = (float)(*(float*)(a1 + 396) + a2[8]) - *(float*)(a1 + 388);
		if (v6 < 0.0)
			goto LABEL_13;
		if (v6 >= 100.0)
		{
			v6 = 100.0;
		}
		else if (v6 < 0.0)
		{
		LABEL_13:
			v6 = 0.0;
		}
		sub_140860560(a1, v6);
		result = *((unsigned int*)a2 + 8);
		*(_DWORD*)(a1 + 396) = result;
		return result;
	case 15:
		*(float*)(a1 + 244) = a2[8] + *(float*)(a1 + 244);
		return result;
	case 16:
		*(float*)(a1 + 248) = a2[8] + *(float*)(a1 + 248);
		return result;
	case 17:
		*(float*)(a1 + 252) = a2[8] + *(float*)(a1 + 252);
		return result;
	case 18:
		*(float*)(a1 + 256) = a2[8] + *(float*)(a1 + 256);
		return result;
	case 19:
		*(float*)(a1 + 276) = a2[8] + *(float*)(a1 + 276);
		return result;
	case 22:
		*(float*)(a1 + 236) = a2[8] + *(float*)(a1 + 236);
		return result;
	case 23:
		*(float*)(a1 + 240) = a2[8] + *(float*)(a1 + 240);
		return result;
	case 29:
		result = *(_QWORD*)(a1 + 496);
		if (result)
			*(float*)(result + 8) = a2[8] + *(float*)(result + 8);
		return result;
	case 30:
		result = *(_QWORD*)(a1 + 496);
		if (result)
			*(float*)(result + 16) = a2[8] + *(float*)(result + 16);
		return result;
	case 31:
		if (*(char*)(a1 + 382) < 0)
			LABEL_8 :
			*(float*)(a1 + 208) = a2[8] + *(float*)(a1 + 208);
		return result;
	case 35:
		*(float*)(a1 + 228) = a2[8] + *(float*)(a1 + 228);
		return result;
	case 36:
		*(float*)(a1 + 220) = a2[8] + *(float*)(a1 + 220);
		return result;
	default:
		return result;
	}
}

