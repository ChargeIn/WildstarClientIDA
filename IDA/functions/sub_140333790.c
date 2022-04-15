//----- (0000000140333790) ----------------------------------------------------
void __fastcall sub_140333790(__int64 a1, unsigned __int16 a2, unsigned __int8* a3)
{
	_DWORD* v3; // rdi
	__int64 v4; // rax
	__int64 v5; // rbx
	int v6; // eax
	LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

	if ((unsigned __int64)a2 < *(_QWORD*)(a1 + 176))
	{
		v3 = *(_DWORD**)(*(_QWORD*)(a1 + 168) + 8i64 * a2);
		if (v3)
		{
			v4 = *a3;
			if ((unsigned int)v4 < 0x14)
			{
				v3[104] = v4;
				v5 = (unsigned int)v4;
				v3[102] -= v3[v4 + 82];
				QueryPerformanceCounter(&PerformanceCount);
				v6 = (unsigned __int64)(1000
					* (PerformanceCount.QuadPart - *(_QWORD*)&v3[2 * v5 + 42] - ::PerformanceCount.QuadPart))
					/ Frequency.QuadPart;
				v3[v5 + 82] = v6;
				v3[102] += v6;
				v3[190] = v3[102] / 0x14u;
				v3[191] = v3[v5 + 82];
			}
		}
	}
}

