using Newtonsoft.Json;
using System.Collections.Generic;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Net.Http.Json;
using System.Text.Json.Serialization;
using YathOnline.Models;
using YathOnline.Models.Dtos;
using YathOnline.Web.Services.Contracts;

namespace YathOnline.Web.Services.Repo
{
    public class ProductRepo : IProductRepo
    {
        private readonly HttpClient _httpClient;

        public ProductRepo(HttpClient httpClient)
        {
            this._httpClient = httpClient;
        }
   
        public async Task<ClientPayload<IEnumerable<ProductDto>>?> GetProductsByCategory(int? productCategoryId, int? numberOfProductToFetch)
        {

            try
            {
                //HttpRequestMessage httpRequestMessage = new HttpRequestMessage(HttpMethod.Get, $"api/Product/GetProductsByCategory?productCategoryId={productCategoryId}&numberOfProductToFetch={numberOfProductToFetch}");


                HttpResponseMessage response ;
                if (!productCategoryId.HasValue && numberOfProductToFetch.HasValue)
                {
                     response = await _httpClient.GetAsync($"api/Product/GetProductsByCategory?productCategoryId={productCategoryId}&numberOfProductToFetch={numberOfProductToFetch.Value}");
                
                }
                else if (!numberOfProductToFetch.HasValue && productCategoryId.HasValue)
                {
                     response = await _httpClient.GetAsync($"api/Product/GetProductsByCategory?productCategoryId={productCategoryId.Value}&numberOfProductToFetch={numberOfProductToFetch}");

                }
                else if(productCategoryId.HasValue && numberOfProductToFetch.HasValue)
                {
                     response = await _httpClient.GetAsync($"api/Product/GetProductsByCategory?productCategoryId={productCategoryId.Value}&numberOfProductToFetch={numberOfProductToFetch.Value}");
                   // HttpRequestMessage httpRequestMessage = new HttpRequestMessage(HttpMethod.Get, $"api/Product/GetProductsByCategory?productCategoryId={productCategoryId.Value}&numberOfProductToFetch={numberOfProductToFetch.Value}");

                    //response = await _httpClient.SendAsync(httpRequestMessage);

                }
                else
                {
                    response = await _httpClient.GetAsync($"api/Product/GetProductsByCategory?productCategoryId={productCategoryId}&numberOfProductToFetch={numberOfProductToFetch}");
                }



                if (response.IsSuccessStatusCode)
                {
                    if (response.StatusCode == System.Net.HttpStatusCode.NoContent)
                    {
                        return default;
                    }
                 return  await response.Content.ReadFromJsonAsync<ClientPayload<IEnumerable<ProductDto>>>();
                }
                       var message =  await response.Content.ReadAsStringAsync();

                throw new Exception($"Http StatusCode:{response.StatusCode} Message:{message} ");

            }
            catch (Exception )
            {
                return null;
            }
       
        
        }

       // Task<ClientPayload<IEnumerable<ProductCategoryDto>>?> GetProductCategories();

        public async Task<ClientPayload<IEnumerable<ProductCategoryDto>>?> GetProductCategories()
        {
            var httpRequestMessage = new HttpRequestMessage(HttpMethod.Get, "api/Product/GetProductCategories");
            httpRequestMessage.Headers.Add("Accept", "application/json");

            var response =  await _httpClient.SendAsync(httpRequestMessage);
            
            
          //var response = await _httpClient.GetAsync("api/Product/GetProductCategories");

            try
            {
                if (response.IsSuccessStatusCode)
                {
                    if (response.StatusCode ==  System.Net.HttpStatusCode.NoContent)
                    {
                        return default;
                    }

                 return  await response.Content.ReadFromJsonAsync<ClientPayload<IEnumerable<ProductCategoryDto>>>();

                }
                var message = await  response.Content.ReadAsStringAsync();
                throw new Exception(message);

            }
            catch (Exception )
            {

                return null;
            }



        }

        /*
                 public async Task<ClientPayload<IEnumerable<ProductDto>>?> GetProductsByCategory(int? productCategoryId, int? numberOfProductToFetch)
        {

            try
            {
                //HttpRequestMessage httpRequestMessage = new HttpRequestMessage(HttpMethod.Get, $"api/Product/GetProductsByCategory?productCategoryId={productCategoryId}&numberOfProductToFetch={numberOfProductToFetch}");
                //HttpRequestMessage httpRequestMessage = new HttpRequestMessage(HttpMethod.Get, $"api/Product/GetProductsByCategory?productCategoryId=2&numberOfProductToFetch=3");

                //var categoryId = (productCategoryId.HasValue)?productCategoryId.Value : null;

                HttpResponseMessage response ;
                if (!productCategoryId.HasValue && numberOfProductToFetch.HasValue)
                {
                     response = await _httpClient.GetAsync($"api/Product/GetProductsByCategory?productCategoryId={productCategoryId}&numberOfProductToFetch={numberOfProductToFetch.Value}");
                }
                else if (!numberOfProductToFetch.HasValue && productCategoryId.HasValue)
                {
                     response = await _httpClient.GetAsync($"api/Product/GetProductsByCategory?productCategoryId={productCategoryId.Value}&numberOfProductToFetch={numberOfProductToFetch}");

                }
                else if(productCategoryId.HasValue && numberOfProductToFetch.HasValue)
                {
                   response = await _httpClient.GetAsync($"api/Product/GetProductsByCategory?productCategoryId={productCategoryId.Value}&numberOfProductToFetch={numberOfProductToFetch.Value}");
                }
                else
                {
                    response = await _httpClient.GetAsync($"api/Product/GetProductsByCategory?productCategoryId={productCategoryId}&numberOfProductToFetch={numberOfProductToFetch}");
                }



                if (response.IsSuccessStatusCode)
                {
                    if (response.StatusCode == System.Net.HttpStatusCode.NoContent)
                    {
                        return default;
                    }
                 return  await response.Content.ReadFromJsonAsync<ClientPayload<IEnumerable<ProductDto>>>();
                }
                       var message =  await response.Content.ReadAsStringAsync();

                throw new Exception($"Http StatusCode:{response.StatusCode} Message:{message} ");

            }
            catch (Exception ex)
            {
               var y = _httpClient.BaseAddress;
                return null;
            }
       
        
        }

         */


    }
}
