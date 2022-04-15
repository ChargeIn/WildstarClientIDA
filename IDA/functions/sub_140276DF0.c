#include "../winhttp.h"

//----- (0000000140276DF0) ----------------------------------------------------
__int64 __fastcall sub_140276DF0(__int64 a1, IDXGIAdapter* a2)
{
	struct IDXGIAdapterVtbl* lpVtbl; // rax
	__int64 v5; // rax
	const D3D_FEATURE_LEVEL* v6; // rcx
	int v7; // edi
	ID3D11Device* v8; // rcx
	ID3D11DeviceContext* v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rcx
	ID3D11Device* v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rax
	__int64 v19; // rcx
	__int64 v21; // [rsp+50h] [rbp-B0h] BYREF
	ID3D11Device* v22; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v23; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v24; // [rsp+68h] [rbp-98h] BYREF
	ID3D11DeviceContext* v25; // [rsp+70h] [rbp-90h] BYREF
	__int64 v26; // [rsp+78h] [rbp-88h] BYREF
	int v27; // [rsp+80h] [rbp-80h] BYREF
	__int64 v28; // [rsp+88h] [rbp-78h] BYREF
	__int64 v29; // [rsp+90h] [rbp-70h] BYREF
	int v30[22]; // [rsp+A0h] [rbp-60h] BYREF
	void* v31; // [rsp+F8h] [rbp-8h]
	int v32[8]; // [rsp+100h] [rbp+0h] BYREF
	__int64 v33; // [rsp+120h] [rbp+20h]
	int v34; // [rsp+128h] [rbp+28h]
	int v35; // [rsp+12Ch] [rbp+2Ch]
	int v36; // [rsp+130h] [rbp+30h]
	int v37; // [rsp+134h] [rbp+34h]

	lpVtbl = a2->lpVtbl;
	v23 = 0i64;
	((void(__fastcall*)(IDXGIAdapter*, void*, __int64*))lpVtbl->QueryInterface)(a2, &unk_140B61210, &v23);
	v5 = *(_QWORD*)(a1 + 6280);
	v6 = (const D3D_FEATURE_LEVEL*)&unk_140B61228;
	v22 = 0i64;
	if (v5)
		v6 = (const D3D_FEATURE_LEVEL*)&unk_140B61220;
	v25 = 0i64;
	v7 = D3D11CreateDevice(
		a2,
		D3D_DRIVER_TYPE_UNKNOWN,
		0i64,
		0x80u,
		v6,
		(v5 != 0) + 1,
		7u,
		&v22,
		(D3D_FEATURE_LEVEL*)&v27,
		&v25);
	if (v7 >= 0)
	{
		v21 = 0i64;
		v24 = 0i64;
		sub_1407E4830(v32, 0i64, 0x38ui64);
		v26 = 0i64;
		if (((__int64(__fastcall*)(ID3D11Device*, void*, __int64*))v22->lpVtbl->QueryInterface)(
			v22,
			&unk_140B61230,
			&v21) >= 0)
		{
			(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)v21 + 344i64))(v21, &v24);
			(*(void(__fastcall**)(__int64, __int64, int*, __int64))(*(_QWORD*)v21 + 264i64))(v21, 5i64, v32, 56i64);
			(*(void(__fastcall**)(__int64, _QWORD, __int64*, __int64))(*(_QWORD*)v21 + 264i64))(v21, 0i64, &v26, 8i64);
		}
		if (dword_140C65694 && (unsigned int)dword_140C65698 < 0x81C5)
			v33 = 0i64;
		v8 = v22;
		*(_DWORD*)(a1 + 6768) = 0;
		if (((__int64(__fastcall*)(ID3D11Device*, void*, __int64*))v8->lpVtbl->QueryInterface)(
			v8,
			&unk_140B611F0,
			&v28) >= 0)
		{
			if ((**(int(__fastcall***)(__int64, void*, __int64*))v28)(v28, &unk_140B61200, &v29) >= 0)
			{
				sub_1407E4830(v30, 0i64, 0x60ui64);
				v30[20] = 4;
				v31 = &unk_140C58AA0;
				(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v29 + 96i64))(v29, v30);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v29 + 16i64))(v29);
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v28 + 16i64))(v28);
			*(_DWORD*)(a1 + 6768) = 1;
		}
		v7 = sub_1402773E0(a1, 0);
		if (v7 >= 0)
		{
			*(_DWORD*)(a1 + 6400) = v27;
			*(_DWORD*)(a1 + 6404) = v32[0];
			*(_DWORD*)(a1 + 6408) = v32[1];
			*(_DWORD*)(a1 + 6412) = v32[2];
			*(_DWORD*)(a1 + 6416) = v32[3];
			*(_DWORD*)(a1 + 6420) = v32[4];
			*(_DWORD*)(a1 + 6424) = v32[5];
			*(_DWORD*)(a1 + 6428) = v32[6];
			*(_DWORD*)(a1 + 6432) = v32[7];
			*(_QWORD*)(a1 + 6436) = v33;
			*(_DWORD*)(a1 + 6444) = v34;
			*(_DWORD*)(a1 + 6448) = v35;
			*(_DWORD*)(a1 + 6452) = v36;
			*(_DWORD*)(a1 + 6456) = v37;
			*(_QWORD*)(a1 + 6460) = v26;
			v9 = v25;
			if (*(ID3D11DeviceContext**)(a1 + 6352) != v25)
			{
				if (v25)
				{
					((void(__fastcall*)(ID3D11DeviceContext*))v25->lpVtbl->AddRef)(v25);
					v9 = v25;
				}
				v10 = *(_QWORD*)(a1 + 6352);
				if (v10)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 16i64))(v10);
					v9 = v25;
				}
				*(_QWORD*)(a1 + 6352) = v9;
			}
			v11 = v24;
			if (*(_QWORD*)(a1 + 6360) != v24)
			{
				if (v24)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
					v11 = v24;
				}
				v12 = *(_QWORD*)(a1 + 6360);
				if (v12)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
					v11 = v24;
				}
				*(_QWORD*)(a1 + 6360) = v11;
			}
			v13 = v22;
			if (*(ID3D11Device**)(a1 + 6336) != v22)
			{
				if (v22)
				{
					((void(__fastcall*)(ID3D11Device*))v22->lpVtbl->AddRef)(v22);
					v13 = v22;
				}
				v14 = *(_QWORD*)(a1 + 6336);
				if (v14)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 16i64))(v14);
					v13 = v22;
				}
				*(_QWORD*)(a1 + 6336) = v13;
			}
			v15 = v21;
			if (*(_QWORD*)(a1 + 6344) != v21)
			{
				if (v21)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
					v15 = v21;
				}
				v16 = *(_QWORD*)(a1 + 6344);
				if (v16)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 16i64))(v16);
					v15 = v21;
				}
				*(_QWORD*)(a1 + 6344) = v15;
			}
			if (*(IDXGIAdapter**)(a1 + 6304) != a2)
			{
				((void(__fastcall*)(IDXGIAdapter*))a2->lpVtbl->AddRef)(a2);
				v17 = *(_QWORD*)(a1 + 6304);
				if (v17)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 16i64))(v17);
				*(_QWORD*)(a1 + 6304) = a2;
			}
			v18 = v23;
			if (*(_QWORD*)(a1 + 6312) != v23)
			{
				if (v23)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
					v18 = v23;
				}
				v19 = *(_QWORD*)(a1 + 6312);
				if (v19)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 16i64))(v19);
					v18 = v23;
				}
				*(_QWORD*)(a1 + 6312) = v18;
			}
			*(_DWORD*)(a1 + 6252) = 0;
			v7 = sub_1402773E0(a1, 1);
			if (v7 >= 0)
				v7 = 0;
		}
		if (v24)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 16i64))(v24);
		if (v21)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 16i64))(v21);
	}
	if (v25)
		((void(__fastcall*)(ID3D11DeviceContext*))v25->lpVtbl->Release)(v25);
	if (v22)
		((void(__fastcall*)(ID3D11Device*))v22->lpVtbl->Release)(v22);
	if (v23)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 16i64))(v23);
	return (unsigned int)v7;
}
// 140C65694: using guessed type int dword_140C65694;
// 140C65698: using guessed type int dword_140C65698;

